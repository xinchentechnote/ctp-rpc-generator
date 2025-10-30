#ifndef CTP_RPC_GENERATOR_HEADERFILEPARSERIMPL_H
#define CTP_RPC_GENERATOR_HEADERFILEPARSERIMPL_H
#include <any>
#include "HeaderFileParserVisitor.h"


class HeaderFileParserImpl : public HeaderFileParserVisitor{
public:
    antlrcpp::Any visitHeaderFile(HeaderFileParserParser::HeaderFileContext *context) override;


    antlrcpp::Any visitClassDeclaration(HeaderFileParserParser::ClassDeclarationContext *context) override;

    antlrcpp::Any visitStructDeclaration(HeaderFileParserParser::StructDeclarationContext *context) override;

    antlrcpp::Any visitClassMember(HeaderFileParserParser::ClassMemberContext *context) override;

    antlrcpp::Any visitStructMember(HeaderFileParserParser::StructMemberContext *context) override;

    antlrcpp::Any visitAccessSpecifier(HeaderFileParserParser::AccessSpecifierContext *context) override;

    antlrcpp::Any visitFunctionDeclaration(HeaderFileParserParser::FunctionDeclarationContext *context) override;
    antlrcpp::Any visitVirtualFunctionDeclaration(HeaderFileParserParser::VirtualFunctionDeclarationContext *context) override;
    antlrcpp::Any visitStaticFunctionDeclaration(HeaderFileParserParser::StaticFunctionDeclarationContext *context) override;
    antlrcpp::Any visitDefaultValue(HeaderFileParserParser::DefaultValueContext *context) override;
    antlrcpp::Any visitDestructorDeclaration(HeaderFileParserParser::DestructorDeclarationContext *context) override;

    antlrcpp::Any visitFieldDeclaration(HeaderFileParserParser::FieldDeclarationContext *context) override;

    antlrcpp::Any visitParameterList(HeaderFileParserParser::ParameterListContext *context) override;

    antlrcpp::Any visitParameter(HeaderFileParserParser::ParameterContext *context) override;

    antlrcpp::Any visitType(HeaderFileParserParser::TypeContext *context) override;

    antlrcpp::Any visitDefineDirective(HeaderFileParserParser::DefineDirectiveContext *context) override;
    antlrcpp::Any visitTypedefDeclaration(HeaderFileParserParser::TypedefDeclarationContext *context) override;
    antlrcpp::Any visitTypeSpecifier(HeaderFileParserParser::TypeSpecifierContext *context) override;
    antlrcpp::Any visitArrayDeclarator(HeaderFileParserParser::ArrayDeclaratorContext *context) override;
    antlrcpp::Any visitEnumDeclaration(HeaderFileParserParser::EnumDeclarationContext *context) override;
    antlrcpp::Any visitEnumMember(HeaderFileParserParser::EnumMemberContext *context) override;
    antlrcpp::Any visitPointerOrReference(HeaderFileParserParser::PointerOrReferenceContext *context) override;
    antlrcpp::Any visitFunctionBody(HeaderFileParserParser::FunctionBodyContext *context) override;


};


#endif //CTP_RPC_GENERATOR_HEADERFILEPARSERIMPL_H