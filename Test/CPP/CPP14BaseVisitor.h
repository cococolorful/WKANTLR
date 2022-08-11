
// Generated from CPP14.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "CPP14Visitor.h"


/**
 * This class provides an empty implementation of CPP14Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CPP14BaseVisitor : public CPP14Visitor {
public:

  virtual std::any visitTranslationunit(CPP14Parser::TranslationunitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryexpression(CPP14Parser::PrimaryexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdexpression(CPP14Parser::IdexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualifiedid(CPP14Parser::UnqualifiedidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedid(CPP14Parser::QualifiedidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNestednamespecifier(CPP14Parser::NestednamespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaexpression(CPP14Parser::LambdaexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaintroducer(CPP14Parser::LambdaintroducerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdacapture(CPP14Parser::LambdacaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapturedefault(CPP14Parser::CapturedefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapturelist(CPP14Parser::CapturelistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapture(CPP14Parser::CaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimplecapture(CPP14Parser::SimplecaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitcapture(CPP14Parser::InitcaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdadeclarator(CPP14Parser::LambdadeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixexpression(CPP14Parser::PostfixexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionlist(CPP14Parser::ExpressionlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPseudodestructorname(CPP14Parser::PseudodestructornameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryexpression(CPP14Parser::UnaryexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryoperator(CPP14Parser::UnaryoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewexpression(CPP14Parser::NewexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewplacement(CPP14Parser::NewplacementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewtypeid(CPP14Parser::NewtypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewdeclarator(CPP14Parser::NewdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoptrnewdeclarator(CPP14Parser::NoptrnewdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewinitializer(CPP14Parser::NewinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeleteexpression(CPP14Parser::DeleteexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoexceptexpression(CPP14Parser::NoexceptexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastexpression(CPP14Parser::CastexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPmexpression(CPP14Parser::PmexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeexpression(CPP14Parser::MultiplicativeexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveexpression(CPP14Parser::AdditiveexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftexpression(CPP14Parser::ShiftexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalexpression(CPP14Parser::RelationalexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityexpression(CPP14Parser::EqualityexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndexpression(CPP14Parser::AndexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusiveorexpression(CPP14Parser::ExclusiveorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclusiveorexpression(CPP14Parser::InclusiveorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalandexpression(CPP14Parser::LogicalandexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalorexpression(CPP14Parser::LogicalorexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalexpression(CPP14Parser::ConditionalexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentexpression(CPP14Parser::AssignmentexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentoperator(CPP14Parser::AssignmentoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(CPP14Parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantexpression(CPP14Parser::ConstantexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(CPP14Parser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeledstatement(CPP14Parser::LabeledstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionstatement(CPP14Parser::ExpressionstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundstatement(CPP14Parser::CompoundstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementseq(CPP14Parser::StatementseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectionstatement(CPP14Parser::SelectionstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(CPP14Parser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIterationstatement(CPP14Parser::IterationstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForinitstatement(CPP14Parser::ForinitstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForrangedeclaration(CPP14Parser::ForrangedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForrangeinitializer(CPP14Parser::ForrangeinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJumpstatement(CPP14Parser::JumpstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationstatement(CPP14Parser::DeclarationstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationseq(CPP14Parser::DeclarationseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(CPP14Parser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockdeclaration(CPP14Parser::BlockdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasdeclaration(CPP14Parser::AliasdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpledeclaration(CPP14Parser::SimpledeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatic_assertdeclaration(CPP14Parser::Static_assertdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptydeclaration(CPP14Parser::EmptydeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributedeclaration(CPP14Parser::AttributedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclspecifier(CPP14Parser::DeclspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclspecifierseq(CPP14Parser::DeclspecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStorageclassspecifier(CPP14Parser::StorageclassspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionspecifier(CPP14Parser::FunctionspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypedefname(CPP14Parser::TypedefnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypespecifier(CPP14Parser::TypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingtypespecifier(CPP14Parser::TrailingtypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypespecifierseq(CPP14Parser::TypespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingtypespecifierseq(CPP14Parser::TrailingtypespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpletypespecifier(CPP14Parser::SimpletypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypename(CPP14Parser::TypenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecltypespecifier(CPP14Parser::DecltypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElaboratedtypespecifier(CPP14Parser::ElaboratedtypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumname(CPP14Parser::EnumnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumspecifier(CPP14Parser::EnumspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumhead(CPP14Parser::EnumheadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpaqueenumdeclaration(CPP14Parser::OpaqueenumdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumkey(CPP14Parser::EnumkeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumbase(CPP14Parser::EnumbaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratorlist(CPP14Parser::EnumeratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratordefinition(CPP14Parser::EnumeratordefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerator(CPP14Parser::EnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespacename(CPP14Parser::NamespacenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOriginalnamespacename(CPP14Parser::OriginalnamespacenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespacedefinition(CPP14Parser::NamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamednamespacedefinition(CPP14Parser::NamednamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOriginalnamespacedefinition(CPP14Parser::OriginalnamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionnamespacedefinition(CPP14Parser::ExtensionnamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnnamednamespacedefinition(CPP14Parser::UnnamednamespacedefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespacebody(CPP14Parser::NamespacebodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespacealias(CPP14Parser::NamespacealiasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespacealiasdefinition(CPP14Parser::NamespacealiasdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiednamespacespecifier(CPP14Parser::QualifiednamespacespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsingdeclaration(CPP14Parser::UsingdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsingdirective(CPP14Parser::UsingdirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsmdefinition(CPP14Parser::AsmdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLinkagespecification(CPP14Parser::LinkagespecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributespecifierseq(CPP14Parser::AttributespecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributespecifier(CPP14Parser::AttributespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlignmentspecifier(CPP14Parser::AlignmentspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributelist(CPP14Parser::AttributelistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute(CPP14Parser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributetoken(CPP14Parser::AttributetokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributescopedtoken(CPP14Parser::AttributescopedtokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributenamespace(CPP14Parser::AttributenamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeargumentclause(CPP14Parser::AttributeargumentclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalancedtokenseq(CPP14Parser::BalancedtokenseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalancedtoken(CPP14Parser::BalancedtokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitdeclaratorlist(CPP14Parser::InitdeclaratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitdeclarator(CPP14Parser::InitdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarator(CPP14Parser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPtrdeclarator(CPP14Parser::PtrdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoptrdeclarator(CPP14Parser::NoptrdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParametersandqualifiers(CPP14Parser::ParametersandqualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingreturntype(CPP14Parser::TrailingreturntypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPtroperator(CPP14Parser::PtroperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCvqualifierseq(CPP14Parser::CvqualifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCvqualifier(CPP14Parser::CvqualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefqualifier(CPP14Parser::RefqualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaratorid(CPP14Parser::DeclaratoridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeid(CPP14Parser::TypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractdeclarator(CPP14Parser::AbstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPtrabstractdeclarator(CPP14Parser::PtrabstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoptrabstractdeclarator(CPP14Parser::NoptrabstractdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractpackdeclarator(CPP14Parser::AbstractpackdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoptrabstractpackdeclarator(CPP14Parser::NoptrabstractpackdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterdeclarationclause(CPP14Parser::ParameterdeclarationclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterdeclarationlist(CPP14Parser::ParameterdeclarationlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterdeclaration(CPP14Parser::ParameterdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctiondefinition(CPP14Parser::FunctiondefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionbody(CPP14Parser::FunctionbodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer(CPP14Parser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBraceorequalinitializer(CPP14Parser::BraceorequalinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerclause(CPP14Parser::InitializerclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerlist(CPP14Parser::InitializerlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracedinitlist(CPP14Parser::BracedinitlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassname(CPP14Parser::ClassnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassspecifier(CPP14Parser::ClassspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClasshead(CPP14Parser::ClassheadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassheadname(CPP14Parser::ClassheadnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassvirtspecifier(CPP14Parser::ClassvirtspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClasskey(CPP14Parser::ClasskeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberspecification(CPP14Parser::MemberspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberdeclaration(CPP14Parser::MemberdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberdeclaratorlist(CPP14Parser::MemberdeclaratorlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberdeclarator(CPP14Parser::MemberdeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVirtspecifierseq(CPP14Parser::VirtspecifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVirtspecifier(CPP14Parser::VirtspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPurespecifier(CPP14Parser::PurespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseclause(CPP14Parser::BaseclauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasespecifierlist(CPP14Parser::BasespecifierlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasespecifier(CPP14Parser::BasespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassordecltype(CPP14Parser::ClassordecltypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasetypespecifier(CPP14Parser::BasetypespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessspecifier(CPP14Parser::AccessspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversionfunctionid(CPP14Parser::ConversionfunctionidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversiontypeid(CPP14Parser::ConversiontypeidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversiondeclarator(CPP14Parser::ConversiondeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCtorinitializer(CPP14Parser::CtorinitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMeminitializerlist(CPP14Parser::MeminitializerlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMeminitializer(CPP14Parser::MeminitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMeminitializerid(CPP14Parser::MeminitializeridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorfunctionid(CPP14Parser::OperatorfunctionidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteraloperatorid(CPP14Parser::LiteraloperatoridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplatedeclaration(CPP14Parser::TemplatedeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateparameterlist(CPP14Parser::TemplateparameterlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateparameter(CPP14Parser::TemplateparameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeparameter(CPP14Parser::TypeparameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpletemplateid(CPP14Parser::SimpletemplateidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateid(CPP14Parser::TemplateidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplatename(CPP14Parser::TemplatenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateargumentlist(CPP14Parser::TemplateargumentlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateargument(CPP14Parser::TemplateargumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypenamespecifier(CPP14Parser::TypenamespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicitinstantiation(CPP14Parser::ExplicitinstantiationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicitspecialization(CPP14Parser::ExplicitspecializationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryblock(CPP14Parser::TryblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctiontryblock(CPP14Parser::FunctiontryblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHandlerseq(CPP14Parser::HandlerseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHandler(CPP14Parser::HandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptiondeclaration(CPP14Parser::ExceptiondeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrowexpression(CPP14Parser::ThrowexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionspecification(CPP14Parser::ExceptionspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDynamicexceptionspecification(CPP14Parser::DynamicexceptionspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeidlist(CPP14Parser::TypeidlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoexceptspecification(CPP14Parser::NoexceptspecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRightShift(CPP14Parser::RightShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRightShiftAssign(CPP14Parser::RightShiftAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator(CPP14Parser::OperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(CPP14Parser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanliteral(CPP14Parser::BooleanliteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerliteral(CPP14Parser::PointerliteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUserdefinedliteral(CPP14Parser::UserdefinedliteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

