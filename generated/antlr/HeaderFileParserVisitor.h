
// Generated from antlr/HeaderFileParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HeaderFileParserParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by HeaderFileParserParser.
 */
class  HeaderFileParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HeaderFileParserParser.
   */
    virtual antlrcpp::Any visitHeaderFile(HeaderFileParserParser::HeaderFileContext *context) = 0;

    virtual antlrcpp::Any visitClassDeclaration(HeaderFileParserParser::ClassDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaration(HeaderFileParserParser::StructDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassMember(HeaderFileParserParser::ClassMemberContext *context) = 0;

    virtual antlrcpp::Any visitStructMember(HeaderFileParserParser::StructMemberContext *context) = 0;

    virtual antlrcpp::Any visitAccessSpecifier(HeaderFileParserParser::AccessSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(HeaderFileParserParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFieldDeclaration(HeaderFileParserParser::FieldDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(HeaderFileParserParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitParameter(HeaderFileParserParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitType(HeaderFileParserParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitDefineDirective(HeaderFileParserParser::DefineDirectiveContext *context) = 0;

    virtual antlrcpp::Any visitEnumDeclaration(HeaderFileParserParser::EnumDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumMember(HeaderFileParserParser::EnumMemberContext *context) = 0;

    virtual antlrcpp::Any visitTypedefDeclaration(HeaderFileParserParser::TypedefDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier(HeaderFileParserParser::TypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitArrayDeclarator(HeaderFileParserParser::ArrayDeclaratorContext *context) = 0;


};

