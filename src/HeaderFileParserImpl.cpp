#include "HeaderFileParserImpl.h"
#include "antlr4-runtime.h"

#include <fstream>
#include <iostream>

using namespace antlr4;

// ----------------- Implement visit methods -----------------

antlrcpp::Any HeaderFileParserImpl::visitHeaderFile(
    HeaderFileParserParser::HeaderFileContext *context) {
  return visitChildren(context);
}

antlrcpp::Any HeaderFileParserImpl::visitClassDeclaration(
    HeaderFileParserParser::ClassDeclarationContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Class: " << idToken->getText() << std::endl;
  return visitChildren(context);
}

antlrcpp::Any HeaderFileParserImpl::visitStructDeclaration(
    HeaderFileParserParser::StructDeclarationContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Struct: " << idToken->getText() << std::endl;
  return visitChildren(context);
}

antlrcpp::Any HeaderFileParserImpl::visitClassMember(
    HeaderFileParserParser::ClassMemberContext *context) {
  return visitChildren(context);
}

antlrcpp::Any HeaderFileParserImpl::visitStructMember(
    HeaderFileParserParser::StructMemberContext *context) {
  return visitChildren(context);
}

antlrcpp::Any HeaderFileParserImpl::visitAccessSpecifier(
    HeaderFileParserParser::AccessSpecifierContext *context) {
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitFunctionDeclaration(
    HeaderFileParserParser::FunctionDeclarationContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Function: " << idToken->getText() << std::endl;
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitDestructorDeclaration(
    HeaderFileParserParser::DestructorDeclarationContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Function: " << idToken->getText() << std::endl;
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitVirtualFunctionDeclaration(
    HeaderFileParserParser::VirtualFunctionDeclarationContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Function: " << idToken->getText() << std::endl;
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitStaticFunctionDeclaration(
    HeaderFileParserParser::StaticFunctionDeclarationContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Function: " << idToken->getText() << std::endl;
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitDefaultValue(HeaderFileParserParser::DefaultValueContext *context) {
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitFieldDeclaration(
    HeaderFileParserParser::FieldDeclarationContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Field: " << idToken->getText() << std::endl;
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitParameterList(
    HeaderFileParserParser::ParameterListContext *context) {
  return visitChildren(context);
}

antlrcpp::Any HeaderFileParserImpl::visitParameter(
    HeaderFileParserParser::ParameterContext *context) {
  return nullptr;
}

antlrcpp::Any
HeaderFileParserImpl::visitType(HeaderFileParserParser::TypeContext *context) {
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitDefineDirective(
    HeaderFileParserParser::DefineDirectiveContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Constant: " << idToken->getText() << std::endl;
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitTypedefDeclaration(
    HeaderFileParserParser::TypedefDeclarationContext *context) {
  auto idToken = context->getToken(HeaderFileParserParser::IDENTIFIER, 0);
  if (idToken)
    std::cout << "Typedef: " << idToken->getText() << std::endl;
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitTypeSpecifier(
    HeaderFileParserParser::TypeSpecifierContext *context) {
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitArrayDeclarator(
    HeaderFileParserParser::ArrayDeclaratorContext *context) {
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitEnumDeclaration(
    HeaderFileParserParser::EnumDeclarationContext *context) {
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitEnumMember(
    HeaderFileParserParser::EnumMemberContext *context) {
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitFunctionBody(
    HeaderFileParserParser::FunctionBodyContext *context) {
  return nullptr;
}

antlrcpp::Any HeaderFileParserImpl::visitPointerOrReference(
    HeaderFileParserParser::PointerOrReferenceContext *context) {
  return nullptr;
}