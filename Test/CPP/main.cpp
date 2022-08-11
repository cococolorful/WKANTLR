#include<string>
#include <filesystem>
#include <fstream>
#include "CPP14Lexer.h"
#include "CPP14Parser.h"
#include "CPP14BaseVisitor.h"
#include <stack>	
#include "../../WKAntlr/AntlrRuntime/src/ANTLRInputStream.h"
#include "../../WKAntlr/AntlrRuntime/src/CommonTokenStream.h"


std::string ReadFileAsString(const std::filesystem::path& path)
{
	if (std::filesystem::exists(path) == false)
	{
		throw "not exists";
	}
	std::ifstream file(path);

	return std::string(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>());
}

using namespace std;
using namespace antlr4;

class MetaGenerator :public CPP14BaseVisitor
{
public:

	struct Field
	{
		std::string field_name;
		std::string attribute_list;
	};
	struct Class
	{
		std::string class_name;
		std::string attribute_list;
		std::vector<Field> field_list;
	};
	std::stack<std::string> namespaces_stack;
	std::stack<Class> classes_stack;

	std::vector<Field> current_class_fields; // a class may contain many fields;

	//									[[UnknowTag()]]
	// when encounting like this ==>	int a,b,c;		
	// which means both a,b and c has the same attribute; 
	std::string current_fields_attribute;



	//////////////////////////////////////////////////////////////////////////
	std::vector<Class> finished_class_list;


	virtual std::any visitOriginalnamespacedefinition(CPP14Parser::OriginalnamespacedefinitionContext* ctx) override {
		auto str = ctx->Identifier()->getText();

		if (!namespaces_stack.empty()) // current namespace is not the top levels namespace
			str = namespaces_stack.top() + "::" + str;
		namespaces_stack.push(str);
		visitChildren(ctx);
		namespaces_stack.pop();
		return 0;
	}
	virtual std::any visitClassspecifier(CPP14Parser::ClassspecifierContext* ctx) override {
		current_class_fields.clear();
		bool defined_inside_other = false;
		if (classes_stack.empty() == false)// The current class is defined inside other classes, so we need to add a layer of namespace
		{
			defined_inside_other = true;
			auto class_name = ctx->classhead()->classheadname()->classname()->getText();
			namespaces_stack.push(class_name);
		}
		classes_stack.push({});

		visitChildren(ctx);

		classes_stack.top().field_list = current_class_fields;
		finished_class_list.push_back(std::move(classes_stack.top()));
		classes_stack.pop();
		if (defined_inside_other)
		{
			assert(classes_stack.empty() == false);
			namespaces_stack.pop();
		}
		return 0;
	}
	virtual std::any visitClasshead(CPP14Parser::ClassheadContext* ctx) override {
		auto class_name = ctx->classheadname()->classname()->getText();
		classes_stack.top().class_name = namespaces_stack.empty() ? class_name : namespaces_stack.top() + "::" + class_name;
		auto attr = ctx->attributespecifierseq();
		if (attr && attr->attributespecifier())  // only support ATTRIBUTE instead of [[ ]]now
		{
			auto attr_spec = attr->attributespecifier();
			if (attr_spec->ATTRIBUTE() && attr_spec->initializerlist())
			{
				classes_stack.top().attribute_list = attr_spec->initializerlist()->getText();
			}
		}

		return 0;//visitChildren(ctx);
	}
	virtual std::any visitMemberdeclaration(CPP14Parser::MemberdeclarationContext* ctx) override {
		current_fields_attribute.clear();

		if (ctx->attributespecifierseq())
		{
			if (auto initializer_list = ctx->attributespecifierseq()->attributespecifier()->initializerlist(); initializer_list)
			{
				current_fields_attribute = initializer_list->getText();
			}
		}
		return visitChildren(ctx);
	}
	virtual std::any visitMemberdeclarator(CPP14Parser::MemberdeclaratorContext* ctx) override {
		Field field;
		field.field_name = ctx->getText();
		field.attribute_list = current_fields_attribute;
		current_class_fields.push_back(field);
		return 0;
	}
// 
// 	void GenerateCode(std::string& output_file_name, bool append = true)
// 	{
// 		auto ReepalceAllString = [](const std::string& origin_str, const std::string& be_replaced_str, const std::string& new_replace_str)
// 		{
// 			std::string result_str = origin_str;
// 			for (std::string::size_type pos = 0; pos != std::string::npos; pos += new_replace_str.length())
// 			{
// 				pos = result_str.find(be_replaced_str, pos);
// 				if (pos != std::string::npos)
// 				{
// 					result_str.replace(pos, be_replaced_str.length(), new_replace_str);
// 				}
// 				else
// 				{
// 					break;
// 				}
// 			}
// 
// 			return result_str;
// 		};
// 		using namespace kainjow::mustache;
// 		auto template_code = ReadFileAsString(R"(C:\Users\hgx\source\repos\WKSRefl\AutoRefl\template)");
// 		kainjow::mustache::mustache tmpl(template_code);
// 		kainjow::mustache::data data;
// 		kainjow::mustache::data classes = data::type::list;
// 		for (auto& class_item : finished_class_list)
// 		{
// 			kainjow::mustache::data class_render_item;
// 			class_render_item.set("class_special_name", ReepalceAllString(class_item.class_name, ":", "_"));
// 			class_render_item.set("class_type", class_item.class_name);
// 
// 			kainjow::mustache::data fields = data::type::list;
// 			for (auto& field_item : class_item.field_list)
// 			{
// 				kainjow::mustache::data field;
// 				field.set("field_name", field_item.field_name);
// 
// 				if (field_item.attribute_list.empty() == false)
// 				{
// 					field.set("exist_field_attribute", kainjow::mustache::data(data::type::bool_true));
// 					field.set("attribute_list", field_item.attribute_list);
// 				}
// 				fields.push_back(field);
// 			}
// 			class_render_item.set("fields", fields);
// 
// 			if (class_item.attribute_list.empty() == false)
// 			{
// 				class_render_item.set("exist_class_attribute", kainjow::mustache::data(data::type::bool_true));
// 				class_render_item.set("attribute_list", class_item.attribute_list);
// 			}
// 
// 			classes.push_back(class_render_item);
// 		}
// 		data.set("classes", classes);
// 		auto s = tmpl.render((data));
// 
// 		std::ofstream output_file;
// 		output_file.open(output_file_name, append ? std::ios::app : std::ios::out);
// 		output_file << s << std::endl;
// 		output_file.close();
// 	}
};
int main(int argc, char** argv)
{
// 	if (argc != 3) {
// 		cerr << "arguments error" << endl;
// 		return 1;
// 	}
// 	string inputPath = argv[1];// R"(C:\Users\hgx\Downloads\LearnCompiler-master\LearnCompiler-master\antlr4\src\02_cpp_14\test.h)";
// 	string outputPath = argv[2];

	auto code = ReadFileAsString(R"(C:\Users\hgx\source\repos\WKANTLR\Test\CPP\test.h)");
 	MetaGenerator vistor;
	ANTLRInputStream input(code.data());
	CPP14Lexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	CPP14Parser parser(&tokens);

	tree::ParseTree* tree = parser.translationunit();
	tree->accept(&vistor);
/*	vistor.GenerateCode(outputPath);*/
}