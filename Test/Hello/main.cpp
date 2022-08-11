#include<string>
#include <filesystem>
#include <fstream>
#include <stack>
#include "HelloBaseVisitor.h"
#include "HelloLexer.h"
#include "HelloParser.h"
/*#include "Mustache/mustache.hpp"*/


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

class MetaGenerator :public HelloBaseVisitor
{
public:
	virtual antlrcpp::Any visitR(HelloParser::RContext* ctx) override {
		auto str = ctx->getText();
		return visitChildren(ctx);
	}
};
int main(int argc, char** argv)
{
// 	if (argc != 3) {
// 		cerr << "arguments error" << endl;
// 		return 1;
// 	}
// 	string inputPath = argv[1];// R"(C:\Users\hgx\Downloads\LearnCompiler-master\LearnCompiler-master\antlr4\src\02_cpp_14\test.h)";
// 	string outputPath = argv[2];
//
	auto code = "hello wakuwaku"s/*ReadFileAsString(inputPath.c_str())*/;

	MetaGenerator vistor;

	ANTLRInputStream input(code.data());
	HelloLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	HelloParser parser(&tokens);

	tree::ParseTree* tree = parser.r();
	tree->accept(&vistor);
}