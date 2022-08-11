
// Generated from CPP14.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "CPP14Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CPP14Parser.
 */
class  CPP14Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CPP14Parser.
   */
    virtual std::any visitTranslationunit(CPP14Parser::TranslationunitContext *context) = 0;

    virtual std::any visitPrimaryexpression(CPP14Parser::PrimaryexpressionContext *context) = 0;

    virtual std::any visitIdexpression(CPP14Parser::IdexpressionContext *context) = 0;

    virtual std::any visitUnqualifiedid(CPP14Parser::UnqualifiedidContext *context) = 0;

    virtual std::any visitQualifiedid(CPP14Parser::QualifiedidContext *context) = 0;

    virtual std::any visitNestednamespecifier(CPP14Parser::NestednamespecifierContext *context) = 0;

    virtual std::any visitLambdaexpression(CPP14Parser::LambdaexpressionContext *context) = 0;

    virtual std::any visitLambdaintroducer(CPP14Parser::LambdaintroducerContext *context) = 0;

    virtual std::any visitLambdacapture(CPP14Parser::LambdacaptureContext *context) = 0;

    virtual std::any visitCapturedefault(CPP14Parser::CapturedefaultContext *context) = 0;

    virtual std::any visitCapturelist(CPP14Parser::CapturelistContext *context) = 0;

    virtual std::any visitCapture(CPP14Parser::CaptureContext *context) = 0;

    virtual std::any visitSimplecapture(CPP14Parser::SimplecaptureContext *context) = 0;

    virtual std::any visitInitcapture(CPP14Parser::InitcaptureContext *context) = 0;

    virtual std::any visitLambdadeclarator(CPP14Parser::LambdadeclaratorContext *context) = 0;

    virtual std::any visitPostfixexpression(CPP14Parser::PostfixexpressionContext *context) = 0;

    virtual std::any visitExpressionlist(CPP14Parser::ExpressionlistContext *context) = 0;

    virtual std::any visitPseudodestructorname(CPP14Parser::PseudodestructornameContext *context) = 0;

    virtual std::any visitUnaryexpression(CPP14Parser::UnaryexpressionContext *context) = 0;

    virtual std::any visitUnaryoperator(CPP14Parser::UnaryoperatorContext *context) = 0;

    virtual std::any visitNewexpression(CPP14Parser::NewexpressionContext *context) = 0;

    virtual std::any visitNewplacement(CPP14Parser::NewplacementContext *context) = 0;

    virtual std::any visitNewtypeid(CPP14Parser::NewtypeidContext *context) = 0;

    virtual std::any visitNewdeclarator(CPP14Parser::NewdeclaratorContext *context) = 0;

    virtual std::any visitNoptrnewdeclarator(CPP14Parser::NoptrnewdeclaratorContext *context) = 0;

    virtual std::any visitNewinitializer(CPP14Parser::NewinitializerContext *context) = 0;

    virtual std::any visitDeleteexpression(CPP14Parser::DeleteexpressionContext *context) = 0;

    virtual std::any visitNoexceptexpression(CPP14Parser::NoexceptexpressionContext *context) = 0;

    virtual std::any visitCastexpression(CPP14Parser::CastexpressionContext *context) = 0;

    virtual std::any visitPmexpression(CPP14Parser::PmexpressionContext *context) = 0;

    virtual std::any visitMultiplicativeexpression(CPP14Parser::MultiplicativeexpressionContext *context) = 0;

    virtual std::any visitAdditiveexpression(CPP14Parser::AdditiveexpressionContext *context) = 0;

    virtual std::any visitShiftexpression(CPP14Parser::ShiftexpressionContext *context) = 0;

    virtual std::any visitRelationalexpression(CPP14Parser::RelationalexpressionContext *context) = 0;

    virtual std::any visitEqualityexpression(CPP14Parser::EqualityexpressionContext *context) = 0;

    virtual std::any visitAndexpression(CPP14Parser::AndexpressionContext *context) = 0;

    virtual std::any visitExclusiveorexpression(CPP14Parser::ExclusiveorexpressionContext *context) = 0;

    virtual std::any visitInclusiveorexpression(CPP14Parser::InclusiveorexpressionContext *context) = 0;

    virtual std::any visitLogicalandexpression(CPP14Parser::LogicalandexpressionContext *context) = 0;

    virtual std::any visitLogicalorexpression(CPP14Parser::LogicalorexpressionContext *context) = 0;

    virtual std::any visitConditionalexpression(CPP14Parser::ConditionalexpressionContext *context) = 0;

    virtual std::any visitAssignmentexpression(CPP14Parser::AssignmentexpressionContext *context) = 0;

    virtual std::any visitAssignmentoperator(CPP14Parser::AssignmentoperatorContext *context) = 0;

    virtual std::any visitExpression(CPP14Parser::ExpressionContext *context) = 0;

    virtual std::any visitConstantexpression(CPP14Parser::ConstantexpressionContext *context) = 0;

    virtual std::any visitStatement(CPP14Parser::StatementContext *context) = 0;

    virtual std::any visitLabeledstatement(CPP14Parser::LabeledstatementContext *context) = 0;

    virtual std::any visitExpressionstatement(CPP14Parser::ExpressionstatementContext *context) = 0;

    virtual std::any visitCompoundstatement(CPP14Parser::CompoundstatementContext *context) = 0;

    virtual std::any visitStatementseq(CPP14Parser::StatementseqContext *context) = 0;

    virtual std::any visitSelectionstatement(CPP14Parser::SelectionstatementContext *context) = 0;

    virtual std::any visitCondition(CPP14Parser::ConditionContext *context) = 0;

    virtual std::any visitIterationstatement(CPP14Parser::IterationstatementContext *context) = 0;

    virtual std::any visitForinitstatement(CPP14Parser::ForinitstatementContext *context) = 0;

    virtual std::any visitForrangedeclaration(CPP14Parser::ForrangedeclarationContext *context) = 0;

    virtual std::any visitForrangeinitializer(CPP14Parser::ForrangeinitializerContext *context) = 0;

    virtual std::any visitJumpstatement(CPP14Parser::JumpstatementContext *context) = 0;

    virtual std::any visitDeclarationstatement(CPP14Parser::DeclarationstatementContext *context) = 0;

    virtual std::any visitDeclarationseq(CPP14Parser::DeclarationseqContext *context) = 0;

    virtual std::any visitDeclaration(CPP14Parser::DeclarationContext *context) = 0;

    virtual std::any visitBlockdeclaration(CPP14Parser::BlockdeclarationContext *context) = 0;

    virtual std::any visitAliasdeclaration(CPP14Parser::AliasdeclarationContext *context) = 0;

    virtual std::any visitSimpledeclaration(CPP14Parser::SimpledeclarationContext *context) = 0;

    virtual std::any visitStatic_assertdeclaration(CPP14Parser::Static_assertdeclarationContext *context) = 0;

    virtual std::any visitEmptydeclaration(CPP14Parser::EmptydeclarationContext *context) = 0;

    virtual std::any visitAttributedeclaration(CPP14Parser::AttributedeclarationContext *context) = 0;

    virtual std::any visitDeclspecifier(CPP14Parser::DeclspecifierContext *context) = 0;

    virtual std::any visitDeclspecifierseq(CPP14Parser::DeclspecifierseqContext *context) = 0;

    virtual std::any visitStorageclassspecifier(CPP14Parser::StorageclassspecifierContext *context) = 0;

    virtual std::any visitFunctionspecifier(CPP14Parser::FunctionspecifierContext *context) = 0;

    virtual std::any visitTypedefname(CPP14Parser::TypedefnameContext *context) = 0;

    virtual std::any visitTypespecifier(CPP14Parser::TypespecifierContext *context) = 0;

    virtual std::any visitTrailingtypespecifier(CPP14Parser::TrailingtypespecifierContext *context) = 0;

    virtual std::any visitTypespecifierseq(CPP14Parser::TypespecifierseqContext *context) = 0;

    virtual std::any visitTrailingtypespecifierseq(CPP14Parser::TrailingtypespecifierseqContext *context) = 0;

    virtual std::any visitSimpletypespecifier(CPP14Parser::SimpletypespecifierContext *context) = 0;

    virtual std::any visitTypename(CPP14Parser::TypenameContext *context) = 0;

    virtual std::any visitDecltypespecifier(CPP14Parser::DecltypespecifierContext *context) = 0;

    virtual std::any visitElaboratedtypespecifier(CPP14Parser::ElaboratedtypespecifierContext *context) = 0;

    virtual std::any visitEnumname(CPP14Parser::EnumnameContext *context) = 0;

    virtual std::any visitEnumspecifier(CPP14Parser::EnumspecifierContext *context) = 0;

    virtual std::any visitEnumhead(CPP14Parser::EnumheadContext *context) = 0;

    virtual std::any visitOpaqueenumdeclaration(CPP14Parser::OpaqueenumdeclarationContext *context) = 0;

    virtual std::any visitEnumkey(CPP14Parser::EnumkeyContext *context) = 0;

    virtual std::any visitEnumbase(CPP14Parser::EnumbaseContext *context) = 0;

    virtual std::any visitEnumeratorlist(CPP14Parser::EnumeratorlistContext *context) = 0;

    virtual std::any visitEnumeratordefinition(CPP14Parser::EnumeratordefinitionContext *context) = 0;

    virtual std::any visitEnumerator(CPP14Parser::EnumeratorContext *context) = 0;

    virtual std::any visitNamespacename(CPP14Parser::NamespacenameContext *context) = 0;

    virtual std::any visitOriginalnamespacename(CPP14Parser::OriginalnamespacenameContext *context) = 0;

    virtual std::any visitNamespacedefinition(CPP14Parser::NamespacedefinitionContext *context) = 0;

    virtual std::any visitNamednamespacedefinition(CPP14Parser::NamednamespacedefinitionContext *context) = 0;

    virtual std::any visitOriginalnamespacedefinition(CPP14Parser::OriginalnamespacedefinitionContext *context) = 0;

    virtual std::any visitExtensionnamespacedefinition(CPP14Parser::ExtensionnamespacedefinitionContext *context) = 0;

    virtual std::any visitUnnamednamespacedefinition(CPP14Parser::UnnamednamespacedefinitionContext *context) = 0;

    virtual std::any visitNamespacebody(CPP14Parser::NamespacebodyContext *context) = 0;

    virtual std::any visitNamespacealias(CPP14Parser::NamespacealiasContext *context) = 0;

    virtual std::any visitNamespacealiasdefinition(CPP14Parser::NamespacealiasdefinitionContext *context) = 0;

    virtual std::any visitQualifiednamespacespecifier(CPP14Parser::QualifiednamespacespecifierContext *context) = 0;

    virtual std::any visitUsingdeclaration(CPP14Parser::UsingdeclarationContext *context) = 0;

    virtual std::any visitUsingdirective(CPP14Parser::UsingdirectiveContext *context) = 0;

    virtual std::any visitAsmdefinition(CPP14Parser::AsmdefinitionContext *context) = 0;

    virtual std::any visitLinkagespecification(CPP14Parser::LinkagespecificationContext *context) = 0;

    virtual std::any visitAttributespecifierseq(CPP14Parser::AttributespecifierseqContext *context) = 0;

    virtual std::any visitAttributespecifier(CPP14Parser::AttributespecifierContext *context) = 0;

    virtual std::any visitAlignmentspecifier(CPP14Parser::AlignmentspecifierContext *context) = 0;

    virtual std::any visitAttributelist(CPP14Parser::AttributelistContext *context) = 0;

    virtual std::any visitAttribute(CPP14Parser::AttributeContext *context) = 0;

    virtual std::any visitAttributetoken(CPP14Parser::AttributetokenContext *context) = 0;

    virtual std::any visitAttributescopedtoken(CPP14Parser::AttributescopedtokenContext *context) = 0;

    virtual std::any visitAttributenamespace(CPP14Parser::AttributenamespaceContext *context) = 0;

    virtual std::any visitAttributeargumentclause(CPP14Parser::AttributeargumentclauseContext *context) = 0;

    virtual std::any visitBalancedtokenseq(CPP14Parser::BalancedtokenseqContext *context) = 0;

    virtual std::any visitBalancedtoken(CPP14Parser::BalancedtokenContext *context) = 0;

    virtual std::any visitInitdeclaratorlist(CPP14Parser::InitdeclaratorlistContext *context) = 0;

    virtual std::any visitInitdeclarator(CPP14Parser::InitdeclaratorContext *context) = 0;

    virtual std::any visitDeclarator(CPP14Parser::DeclaratorContext *context) = 0;

    virtual std::any visitPtrdeclarator(CPP14Parser::PtrdeclaratorContext *context) = 0;

    virtual std::any visitNoptrdeclarator(CPP14Parser::NoptrdeclaratorContext *context) = 0;

    virtual std::any visitParametersandqualifiers(CPP14Parser::ParametersandqualifiersContext *context) = 0;

    virtual std::any visitTrailingreturntype(CPP14Parser::TrailingreturntypeContext *context) = 0;

    virtual std::any visitPtroperator(CPP14Parser::PtroperatorContext *context) = 0;

    virtual std::any visitCvqualifierseq(CPP14Parser::CvqualifierseqContext *context) = 0;

    virtual std::any visitCvqualifier(CPP14Parser::CvqualifierContext *context) = 0;

    virtual std::any visitRefqualifier(CPP14Parser::RefqualifierContext *context) = 0;

    virtual std::any visitDeclaratorid(CPP14Parser::DeclaratoridContext *context) = 0;

    virtual std::any visitTypeid(CPP14Parser::TypeidContext *context) = 0;

    virtual std::any visitAbstractdeclarator(CPP14Parser::AbstractdeclaratorContext *context) = 0;

    virtual std::any visitPtrabstractdeclarator(CPP14Parser::PtrabstractdeclaratorContext *context) = 0;

    virtual std::any visitNoptrabstractdeclarator(CPP14Parser::NoptrabstractdeclaratorContext *context) = 0;

    virtual std::any visitAbstractpackdeclarator(CPP14Parser::AbstractpackdeclaratorContext *context) = 0;

    virtual std::any visitNoptrabstractpackdeclarator(CPP14Parser::NoptrabstractpackdeclaratorContext *context) = 0;

    virtual std::any visitParameterdeclarationclause(CPP14Parser::ParameterdeclarationclauseContext *context) = 0;

    virtual std::any visitParameterdeclarationlist(CPP14Parser::ParameterdeclarationlistContext *context) = 0;

    virtual std::any visitParameterdeclaration(CPP14Parser::ParameterdeclarationContext *context) = 0;

    virtual std::any visitFunctiondefinition(CPP14Parser::FunctiondefinitionContext *context) = 0;

    virtual std::any visitFunctionbody(CPP14Parser::FunctionbodyContext *context) = 0;

    virtual std::any visitInitializer(CPP14Parser::InitializerContext *context) = 0;

    virtual std::any visitBraceorequalinitializer(CPP14Parser::BraceorequalinitializerContext *context) = 0;

    virtual std::any visitInitializerclause(CPP14Parser::InitializerclauseContext *context) = 0;

    virtual std::any visitInitializerlist(CPP14Parser::InitializerlistContext *context) = 0;

    virtual std::any visitBracedinitlist(CPP14Parser::BracedinitlistContext *context) = 0;

    virtual std::any visitClassname(CPP14Parser::ClassnameContext *context) = 0;

    virtual std::any visitClassspecifier(CPP14Parser::ClassspecifierContext *context) = 0;

    virtual std::any visitClasshead(CPP14Parser::ClassheadContext *context) = 0;

    virtual std::any visitClassheadname(CPP14Parser::ClassheadnameContext *context) = 0;

    virtual std::any visitClassvirtspecifier(CPP14Parser::ClassvirtspecifierContext *context) = 0;

    virtual std::any visitClasskey(CPP14Parser::ClasskeyContext *context) = 0;

    virtual std::any visitMemberspecification(CPP14Parser::MemberspecificationContext *context) = 0;

    virtual std::any visitMemberdeclaration(CPP14Parser::MemberdeclarationContext *context) = 0;

    virtual std::any visitMemberdeclaratorlist(CPP14Parser::MemberdeclaratorlistContext *context) = 0;

    virtual std::any visitMemberdeclarator(CPP14Parser::MemberdeclaratorContext *context) = 0;

    virtual std::any visitVirtspecifierseq(CPP14Parser::VirtspecifierseqContext *context) = 0;

    virtual std::any visitVirtspecifier(CPP14Parser::VirtspecifierContext *context) = 0;

    virtual std::any visitPurespecifier(CPP14Parser::PurespecifierContext *context) = 0;

    virtual std::any visitBaseclause(CPP14Parser::BaseclauseContext *context) = 0;

    virtual std::any visitBasespecifierlist(CPP14Parser::BasespecifierlistContext *context) = 0;

    virtual std::any visitBasespecifier(CPP14Parser::BasespecifierContext *context) = 0;

    virtual std::any visitClassordecltype(CPP14Parser::ClassordecltypeContext *context) = 0;

    virtual std::any visitBasetypespecifier(CPP14Parser::BasetypespecifierContext *context) = 0;

    virtual std::any visitAccessspecifier(CPP14Parser::AccessspecifierContext *context) = 0;

    virtual std::any visitConversionfunctionid(CPP14Parser::ConversionfunctionidContext *context) = 0;

    virtual std::any visitConversiontypeid(CPP14Parser::ConversiontypeidContext *context) = 0;

    virtual std::any visitConversiondeclarator(CPP14Parser::ConversiondeclaratorContext *context) = 0;

    virtual std::any visitCtorinitializer(CPP14Parser::CtorinitializerContext *context) = 0;

    virtual std::any visitMeminitializerlist(CPP14Parser::MeminitializerlistContext *context) = 0;

    virtual std::any visitMeminitializer(CPP14Parser::MeminitializerContext *context) = 0;

    virtual std::any visitMeminitializerid(CPP14Parser::MeminitializeridContext *context) = 0;

    virtual std::any visitOperatorfunctionid(CPP14Parser::OperatorfunctionidContext *context) = 0;

    virtual std::any visitLiteraloperatorid(CPP14Parser::LiteraloperatoridContext *context) = 0;

    virtual std::any visitTemplatedeclaration(CPP14Parser::TemplatedeclarationContext *context) = 0;

    virtual std::any visitTemplateparameterlist(CPP14Parser::TemplateparameterlistContext *context) = 0;

    virtual std::any visitTemplateparameter(CPP14Parser::TemplateparameterContext *context) = 0;

    virtual std::any visitTypeparameter(CPP14Parser::TypeparameterContext *context) = 0;

    virtual std::any visitSimpletemplateid(CPP14Parser::SimpletemplateidContext *context) = 0;

    virtual std::any visitTemplateid(CPP14Parser::TemplateidContext *context) = 0;

    virtual std::any visitTemplatename(CPP14Parser::TemplatenameContext *context) = 0;

    virtual std::any visitTemplateargumentlist(CPP14Parser::TemplateargumentlistContext *context) = 0;

    virtual std::any visitTemplateargument(CPP14Parser::TemplateargumentContext *context) = 0;

    virtual std::any visitTypenamespecifier(CPP14Parser::TypenamespecifierContext *context) = 0;

    virtual std::any visitExplicitinstantiation(CPP14Parser::ExplicitinstantiationContext *context) = 0;

    virtual std::any visitExplicitspecialization(CPP14Parser::ExplicitspecializationContext *context) = 0;

    virtual std::any visitTryblock(CPP14Parser::TryblockContext *context) = 0;

    virtual std::any visitFunctiontryblock(CPP14Parser::FunctiontryblockContext *context) = 0;

    virtual std::any visitHandlerseq(CPP14Parser::HandlerseqContext *context) = 0;

    virtual std::any visitHandler(CPP14Parser::HandlerContext *context) = 0;

    virtual std::any visitExceptiondeclaration(CPP14Parser::ExceptiondeclarationContext *context) = 0;

    virtual std::any visitThrowexpression(CPP14Parser::ThrowexpressionContext *context) = 0;

    virtual std::any visitExceptionspecification(CPP14Parser::ExceptionspecificationContext *context) = 0;

    virtual std::any visitDynamicexceptionspecification(CPP14Parser::DynamicexceptionspecificationContext *context) = 0;

    virtual std::any visitTypeidlist(CPP14Parser::TypeidlistContext *context) = 0;

    virtual std::any visitNoexceptspecification(CPP14Parser::NoexceptspecificationContext *context) = 0;

    virtual std::any visitRightShift(CPP14Parser::RightShiftContext *context) = 0;

    virtual std::any visitRightShiftAssign(CPP14Parser::RightShiftAssignContext *context) = 0;

    virtual std::any visitOperator(CPP14Parser::OperatorContext *context) = 0;

    virtual std::any visitLiteral(CPP14Parser::LiteralContext *context) = 0;

    virtual std::any visitBooleanliteral(CPP14Parser::BooleanliteralContext *context) = 0;

    virtual std::any visitPointerliteral(CPP14Parser::PointerliteralContext *context) = 0;

    virtual std::any visitUserdefinedliteral(CPP14Parser::UserdefinedliteralContext *context) = 0;


};

