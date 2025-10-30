
// Generated from antlr/HeaderFileParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HeaderFileParserVisitor.h"


/**
 * This class provides an empty implementation of HeaderFileParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HeaderFileParserBaseVisitor : public HeaderFileParserVisitor {
public:

  virtual antlrcpp::Any visitHeaderFile(HeaderFileParserParser::HeaderFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassDeclaration(HeaderFileParserParser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMacroModifier(HeaderFileParserParser::MacroModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDeclaration(HeaderFileParserParser::StructDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassMember(HeaderFileParserParser::ClassMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructMember(HeaderFileParserParser::StructMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccessSpecifier(HeaderFileParserParser::AccessSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldDeclaration(HeaderFileParserParser::FieldDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(HeaderFileParserParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefineDirective(HeaderFileParserParser::DefineDirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDeclaration(HeaderFileParserParser::EnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumMember(HeaderFileParserParser::EnumMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypedefDeclaration(HeaderFileParserParser::TypedefDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSpecifier(HeaderFileParserParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayDeclarator(HeaderFileParserParser::ArrayDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(HeaderFileParserParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVirtualFunctionDeclaration(HeaderFileParserParser::VirtualFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStaticFunctionDeclaration(HeaderFileParserParser::StaticFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDestructorDeclaration(HeaderFileParserParser::DestructorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterList(HeaderFileParserParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(HeaderFileParserParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultValue(HeaderFileParserParser::DefaultValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerOrReference(HeaderFileParserParser::PointerOrReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionBody(HeaderFileParserParser::FunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }


};

