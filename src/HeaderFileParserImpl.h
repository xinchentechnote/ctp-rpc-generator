#ifndef CTP_RPC_GENERATOR_HEADERFILEPARSERIMPL_H
#define CTP_RPC_GENERATOR_HEADERFILEPARSERIMPL_H
#include <any>
#include "HeaderFileParserVisitor.h"


class HeaderFileParserImpl : public HeaderFileParserVisitor{
public:
    antlrcpp::Any visitHeaderFile(HeaderFileParserParser::HeaderFileContext *context) override;

    antlrcpp::Any visitClassOrStructDeclaration(HeaderFileParserParser::ClassOrStructDeclarationContext *context) override;

    antlrcpp::Any visitClassDeclaration(HeaderFileParserParser::ClassDeclarationContext *context) override;

    antlrcpp::Any visitStructDeclaration(HeaderFileParserParser::StructDeclarationContext *context) override;

    antlrcpp::Any visitClassMember(HeaderFileParserParser::ClassMemberContext *context) override;

    antlrcpp::Any visitStructMember(HeaderFileParserParser::StructMemberContext *context) override;

    antlrcpp::Any visitAccessSpecifier(HeaderFileParserParser::AccessSpecifierContext *context) override;

    antlrcpp::Any visitFunctionDeclaration(HeaderFileParserParser::FunctionDeclarationContext *context) override;

    antlrcpp::Any visitFieldDeclaration(HeaderFileParserParser::FieldDeclarationContext *context) override;

    antlrcpp::Any visitParameterList(HeaderFileParserParser::ParameterListContext *context) override;

    antlrcpp::Any visitParameter(HeaderFileParserParser::ParameterContext *context) override;

    antlrcpp::Any visitType(HeaderFileParserParser::TypeContext *context) override;

    antlrcpp::Any visitMacroConstantDeclaration(HeaderFileParserParser::MacroConstantDeclarationContext *context) override;
};


#endif //CTP_RPC_GENERATOR_HEADERFILEPARSERIMPL_H