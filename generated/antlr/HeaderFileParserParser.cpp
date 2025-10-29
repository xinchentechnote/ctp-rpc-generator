
// Generated from antlr/HeaderFileParser.g4 by ANTLR 4.8


#include "HeaderFileParserVisitor.h"

#include "HeaderFileParserParser.h"


using namespace antlrcpp;
using namespace antlr4;

HeaderFileParserParser::HeaderFileParserParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HeaderFileParserParser::~HeaderFileParserParser() {
  delete _interpreter;
}

std::string HeaderFileParserParser::getGrammarFileName() const {
  return "HeaderFileParser.g4";
}

const std::vector<std::string>& HeaderFileParserParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HeaderFileParserParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- HeaderFileContext ------------------------------------------------------------------

HeaderFileParserParser::HeaderFileContext::HeaderFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::HeaderFileContext::EOF() {
  return getToken(HeaderFileParserParser::EOF, 0);
}

std::vector<HeaderFileParserParser::ClassDeclarationContext *> HeaderFileParserParser::HeaderFileContext::classDeclaration() {
  return getRuleContexts<HeaderFileParserParser::ClassDeclarationContext>();
}

HeaderFileParserParser::ClassDeclarationContext* HeaderFileParserParser::HeaderFileContext::classDeclaration(size_t i) {
  return getRuleContext<HeaderFileParserParser::ClassDeclarationContext>(i);
}

std::vector<HeaderFileParserParser::StructDeclarationContext *> HeaderFileParserParser::HeaderFileContext::structDeclaration() {
  return getRuleContexts<HeaderFileParserParser::StructDeclarationContext>();
}

HeaderFileParserParser::StructDeclarationContext* HeaderFileParserParser::HeaderFileContext::structDeclaration(size_t i) {
  return getRuleContext<HeaderFileParserParser::StructDeclarationContext>(i);
}

std::vector<HeaderFileParserParser::TypedefDeclarationContext *> HeaderFileParserParser::HeaderFileContext::typedefDeclaration() {
  return getRuleContexts<HeaderFileParserParser::TypedefDeclarationContext>();
}

HeaderFileParserParser::TypedefDeclarationContext* HeaderFileParserParser::HeaderFileContext::typedefDeclaration(size_t i) {
  return getRuleContext<HeaderFileParserParser::TypedefDeclarationContext>(i);
}

std::vector<HeaderFileParserParser::EnumDeclarationContext *> HeaderFileParserParser::HeaderFileContext::enumDeclaration() {
  return getRuleContexts<HeaderFileParserParser::EnumDeclarationContext>();
}

HeaderFileParserParser::EnumDeclarationContext* HeaderFileParserParser::HeaderFileContext::enumDeclaration(size_t i) {
  return getRuleContext<HeaderFileParserParser::EnumDeclarationContext>(i);
}

std::vector<HeaderFileParserParser::DefineDirectiveContext *> HeaderFileParserParser::HeaderFileContext::defineDirective() {
  return getRuleContexts<HeaderFileParserParser::DefineDirectiveContext>();
}

HeaderFileParserParser::DefineDirectiveContext* HeaderFileParserParser::HeaderFileContext::defineDirective(size_t i) {
  return getRuleContext<HeaderFileParserParser::DefineDirectiveContext>(i);
}


size_t HeaderFileParserParser::HeaderFileContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleHeaderFile;
}


antlrcpp::Any HeaderFileParserParser::HeaderFileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitHeaderFile(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::HeaderFileContext* HeaderFileParserParser::headerFile() {
  HeaderFileContext *_localctx = _tracker.createInstance<HeaderFileContext>(_ctx, getState());
  enterRule(_localctx, 0, HeaderFileParserParser::RuleHeaderFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::CLASS)
      | (1ULL << HeaderFileParserParser::STRUCT)
      | (1ULL << HeaderFileParserParser::ENUM)
      | (1ULL << HeaderFileParserParser::TYPEDEF))) != 0)) {
      setState(47);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HeaderFileParserParser::CLASS: {
          setState(42);
          classDeclaration();
          break;
        }

        case HeaderFileParserParser::STRUCT: {
          setState(43);
          structDeclaration();
          break;
        }

        case HeaderFileParserParser::TYPEDEF: {
          setState(44);
          typedefDeclaration();
          break;
        }

        case HeaderFileParserParser::ENUM: {
          setState(45);
          enumDeclaration();
          break;
        }

        case HeaderFileParserParser::T__7: {
          setState(46);
          defineDirective();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
    match(HeaderFileParserParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::ClassDeclarationContext::CLASS() {
  return getToken(HeaderFileParserParser::CLASS, 0);
}

std::vector<tree::TerminalNode *> HeaderFileParserParser::ClassDeclarationContext::IDENTIFIER() {
  return getTokens(HeaderFileParserParser::IDENTIFIER);
}

tree::TerminalNode* HeaderFileParserParser::ClassDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(HeaderFileParserParser::IDENTIFIER, i);
}

HeaderFileParserParser::AccessSpecifierContext* HeaderFileParserParser::ClassDeclarationContext::accessSpecifier() {
  return getRuleContext<HeaderFileParserParser::AccessSpecifierContext>(0);
}

std::vector<HeaderFileParserParser::ClassMemberContext *> HeaderFileParserParser::ClassDeclarationContext::classMember() {
  return getRuleContexts<HeaderFileParserParser::ClassMemberContext>();
}

HeaderFileParserParser::ClassMemberContext* HeaderFileParserParser::ClassDeclarationContext::classMember(size_t i) {
  return getRuleContext<HeaderFileParserParser::ClassMemberContext>(i);
}


size_t HeaderFileParserParser::ClassDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleClassDeclaration;
}


antlrcpp::Any HeaderFileParserParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::ClassDeclarationContext* HeaderFileParserParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, HeaderFileParserParser::RuleClassDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(HeaderFileParserParser::CLASS);
    setState(55);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__0) {
      setState(56);
      match(HeaderFileParserParser::T__0);
      setState(57);
      accessSpecifier();
      setState(58);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(62);
    match(HeaderFileParserParser::T__1);
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__4)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::T__23)
      | (1ULL << HeaderFileParserParser::T__24)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(63);
      classMember();
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
    match(HeaderFileParserParser::T__2);
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(70);
      match(HeaderFileParserParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::StructDeclarationContext::STRUCT() {
  return getToken(HeaderFileParserParser::STRUCT, 0);
}

std::vector<tree::TerminalNode *> HeaderFileParserParser::StructDeclarationContext::IDENTIFIER() {
  return getTokens(HeaderFileParserParser::IDENTIFIER);
}

tree::TerminalNode* HeaderFileParserParser::StructDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(HeaderFileParserParser::IDENTIFIER, i);
}

HeaderFileParserParser::AccessSpecifierContext* HeaderFileParserParser::StructDeclarationContext::accessSpecifier() {
  return getRuleContext<HeaderFileParserParser::AccessSpecifierContext>(0);
}

std::vector<HeaderFileParserParser::StructMemberContext *> HeaderFileParserParser::StructDeclarationContext::structMember() {
  return getRuleContexts<HeaderFileParserParser::StructMemberContext>();
}

HeaderFileParserParser::StructMemberContext* HeaderFileParserParser::StructDeclarationContext::structMember(size_t i) {
  return getRuleContext<HeaderFileParserParser::StructMemberContext>(i);
}


size_t HeaderFileParserParser::StructDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleStructDeclaration;
}


antlrcpp::Any HeaderFileParserParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::StructDeclarationContext* HeaderFileParserParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, HeaderFileParserParser::RuleStructDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(HeaderFileParserParser::STRUCT);
    setState(74);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__0) {
      setState(75);
      match(HeaderFileParserParser::T__0);
      setState(76);
      accessSpecifier();
      setState(77);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(81);
    match(HeaderFileParserParser::T__1);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__4)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::T__23)
      | (1ULL << HeaderFileParserParser::T__24)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(82);
      structMember();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    match(HeaderFileParserParser::T__2);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(89);
      match(HeaderFileParserParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberContext ------------------------------------------------------------------

HeaderFileParserParser::ClassMemberContext::ClassMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HeaderFileParserParser::AccessSpecifierContext* HeaderFileParserParser::ClassMemberContext::accessSpecifier() {
  return getRuleContext<HeaderFileParserParser::AccessSpecifierContext>(0);
}

HeaderFileParserParser::VirtualFunctionDeclarationContext* HeaderFileParserParser::ClassMemberContext::virtualFunctionDeclaration() {
  return getRuleContext<HeaderFileParserParser::VirtualFunctionDeclarationContext>(0);
}

HeaderFileParserParser::DestructorDeclarationContext* HeaderFileParserParser::ClassMemberContext::destructorDeclaration() {
  return getRuleContext<HeaderFileParserParser::DestructorDeclarationContext>(0);
}

HeaderFileParserParser::FunctionDeclarationContext* HeaderFileParserParser::ClassMemberContext::functionDeclaration() {
  return getRuleContext<HeaderFileParserParser::FunctionDeclarationContext>(0);
}

HeaderFileParserParser::FieldDeclarationContext* HeaderFileParserParser::ClassMemberContext::fieldDeclaration() {
  return getRuleContext<HeaderFileParserParser::FieldDeclarationContext>(0);
}


size_t HeaderFileParserParser::ClassMemberContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleClassMember;
}


antlrcpp::Any HeaderFileParserParser::ClassMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitClassMember(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::ClassMemberContext* HeaderFileParserParser::classMember() {
  ClassMemberContext *_localctx = _tracker.createInstance<ClassMemberContext>(_ctx, getState());
  enterRule(_localctx, 6, HeaderFileParserParser::RuleClassMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      accessSpecifier();
      setState(93);
      match(HeaderFileParserParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      virtualFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(96);
      destructorDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(97);
      functionDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(98);
      fieldDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructMemberContext ------------------------------------------------------------------

HeaderFileParserParser::StructMemberContext::StructMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HeaderFileParserParser::AccessSpecifierContext* HeaderFileParserParser::StructMemberContext::accessSpecifier() {
  return getRuleContext<HeaderFileParserParser::AccessSpecifierContext>(0);
}

HeaderFileParserParser::VirtualFunctionDeclarationContext* HeaderFileParserParser::StructMemberContext::virtualFunctionDeclaration() {
  return getRuleContext<HeaderFileParserParser::VirtualFunctionDeclarationContext>(0);
}

HeaderFileParserParser::DestructorDeclarationContext* HeaderFileParserParser::StructMemberContext::destructorDeclaration() {
  return getRuleContext<HeaderFileParserParser::DestructorDeclarationContext>(0);
}

HeaderFileParserParser::FunctionDeclarationContext* HeaderFileParserParser::StructMemberContext::functionDeclaration() {
  return getRuleContext<HeaderFileParserParser::FunctionDeclarationContext>(0);
}

HeaderFileParserParser::FieldDeclarationContext* HeaderFileParserParser::StructMemberContext::fieldDeclaration() {
  return getRuleContext<HeaderFileParserParser::FieldDeclarationContext>(0);
}


size_t HeaderFileParserParser::StructMemberContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleStructMember;
}


antlrcpp::Any HeaderFileParserParser::StructMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitStructMember(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::StructMemberContext* HeaderFileParserParser::structMember() {
  StructMemberContext *_localctx = _tracker.createInstance<StructMemberContext>(_ctx, getState());
  enterRule(_localctx, 8, HeaderFileParserParser::RuleStructMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(101);
      accessSpecifier();
      setState(102);
      match(HeaderFileParserParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      virtualFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(105);
      destructorDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(106);
      functionDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(107);
      fieldDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessSpecifierContext ------------------------------------------------------------------

HeaderFileParserParser::AccessSpecifierContext::AccessSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HeaderFileParserParser::AccessSpecifierContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleAccessSpecifier;
}


antlrcpp::Any HeaderFileParserParser::AccessSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitAccessSpecifier(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::AccessSpecifierContext* HeaderFileParserParser::accessSpecifier() {
  AccessSpecifierContext *_localctx = _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 10, HeaderFileParserParser::RuleAccessSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__4)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__6))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HeaderFileParserParser::TypeContext* HeaderFileParserParser::FieldDeclarationContext::type() {
  return getRuleContext<HeaderFileParserParser::TypeContext>(0);
}

tree::TerminalNode* HeaderFileParserParser::FieldDeclarationContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}


size_t HeaderFileParserParser::FieldDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleFieldDeclaration;
}


antlrcpp::Any HeaderFileParserParser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::FieldDeclarationContext* HeaderFileParserParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, HeaderFileParserParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    type();
    setState(113);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(114);
    match(HeaderFileParserParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

HeaderFileParserParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::TypeContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}


size_t HeaderFileParserParser::TypeContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleType;
}


antlrcpp::Any HeaderFileParserParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::TypeContext* HeaderFileParserParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 14, HeaderFileParserParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(HeaderFileParserParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineDirectiveContext ------------------------------------------------------------------

HeaderFileParserParser::DefineDirectiveContext::DefineDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HeaderFileParserParser::DefineDirectiveContext::IDENTIFIER() {
  return getTokens(HeaderFileParserParser::IDENTIFIER);
}

tree::TerminalNode* HeaderFileParserParser::DefineDirectiveContext::IDENTIFIER(size_t i) {
  return getToken(HeaderFileParserParser::IDENTIFIER, i);
}

tree::TerminalNode* HeaderFileParserParser::DefineDirectiveContext::NUMBER() {
  return getToken(HeaderFileParserParser::NUMBER, 0);
}

tree::TerminalNode* HeaderFileParserParser::DefineDirectiveContext::STRING_LITERAL() {
  return getToken(HeaderFileParserParser::STRING_LITERAL, 0);
}

tree::TerminalNode* HeaderFileParserParser::DefineDirectiveContext::CHAR_LITERAL() {
  return getToken(HeaderFileParserParser::CHAR_LITERAL, 0);
}


size_t HeaderFileParserParser::DefineDirectiveContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleDefineDirective;
}


antlrcpp::Any HeaderFileParserParser::DefineDirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitDefineDirective(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::DefineDirectiveContext* HeaderFileParserParser::defineDirective() {
  DefineDirectiveContext *_localctx = _tracker.createInstance<DefineDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 16, HeaderFileParserParser::RuleDefineDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(HeaderFileParserParser::T__7);
    setState(119);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::STRING_LITERAL)
      | (1ULL << HeaderFileParserParser::CHAR_LITERAL)
      | (1ULL << HeaderFileParserParser::IDENTIFIER)
      | (1ULL << HeaderFileParserParser::NUMBER))) != 0)) {
      setState(120);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HeaderFileParserParser::STRING_LITERAL)
        | (1ULL << HeaderFileParserParser::CHAR_LITERAL)
        | (1ULL << HeaderFileParserParser::IDENTIFIER)
        | (1ULL << HeaderFileParserParser::NUMBER))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::EnumDeclarationContext::ENUM() {
  return getToken(HeaderFileParserParser::ENUM, 0);
}

std::vector<HeaderFileParserParser::EnumMemberContext *> HeaderFileParserParser::EnumDeclarationContext::enumMember() {
  return getRuleContexts<HeaderFileParserParser::EnumMemberContext>();
}

HeaderFileParserParser::EnumMemberContext* HeaderFileParserParser::EnumDeclarationContext::enumMember(size_t i) {
  return getRuleContext<HeaderFileParserParser::EnumMemberContext>(i);
}

tree::TerminalNode* HeaderFileParserParser::EnumDeclarationContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}


size_t HeaderFileParserParser::EnumDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleEnumDeclaration;
}


antlrcpp::Any HeaderFileParserParser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::EnumDeclarationContext* HeaderFileParserParser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, HeaderFileParserParser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(HeaderFileParserParser::ENUM);
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(124);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(127);
    match(HeaderFileParserParser::T__1);
    setState(128);
    enumMember();
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__8) {
      setState(129);
      match(HeaderFileParserParser::T__8);
      setState(130);
      enumMember();
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    match(HeaderFileParserParser::T__2);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(137);
      match(HeaderFileParserParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumMemberContext ------------------------------------------------------------------

HeaderFileParserParser::EnumMemberContext::EnumMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::EnumMemberContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}

tree::TerminalNode* HeaderFileParserParser::EnumMemberContext::NUMBER() {
  return getToken(HeaderFileParserParser::NUMBER, 0);
}


size_t HeaderFileParserParser::EnumMemberContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleEnumMember;
}


antlrcpp::Any HeaderFileParserParser::EnumMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitEnumMember(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::EnumMemberContext* HeaderFileParserParser::enumMember() {
  EnumMemberContext *_localctx = _tracker.createInstance<EnumMemberContext>(_ctx, getState());
  enterRule(_localctx, 20, HeaderFileParserParser::RuleEnumMember);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__9) {
      setState(141);
      match(HeaderFileParserParser::T__9);
      setState(142);
      match(HeaderFileParserParser::NUMBER);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::TypedefDeclarationContext::TypedefDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::TypedefDeclarationContext::TYPEDEF() {
  return getToken(HeaderFileParserParser::TYPEDEF, 0);
}

HeaderFileParserParser::TypeSpecifierContext* HeaderFileParserParser::TypedefDeclarationContext::typeSpecifier() {
  return getRuleContext<HeaderFileParserParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* HeaderFileParserParser::TypedefDeclarationContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}

HeaderFileParserParser::ArrayDeclaratorContext* HeaderFileParserParser::TypedefDeclarationContext::arrayDeclarator() {
  return getRuleContext<HeaderFileParserParser::ArrayDeclaratorContext>(0);
}


size_t HeaderFileParserParser::TypedefDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleTypedefDeclaration;
}


antlrcpp::Any HeaderFileParserParser::TypedefDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitTypedefDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::TypedefDeclarationContext* HeaderFileParserParser::typedefDeclaration() {
  TypedefDeclarationContext *_localctx = _tracker.createInstance<TypedefDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, HeaderFileParserParser::RuleTypedefDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(HeaderFileParserParser::TYPEDEF);
    setState(146);
    typeSpecifier();
    setState(147);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__18) {
      setState(148);
      arrayDeclarator();
    }
    setState(151);
    match(HeaderFileParserParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

HeaderFileParserParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HeaderFileParserParser::TypeSpecifierContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleTypeSpecifier;
}


antlrcpp::Any HeaderFileParserParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::TypeSpecifierContext* HeaderFileParserParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 24, HeaderFileParserParser::RuleTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__10)
      | (1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDeclaratorContext ------------------------------------------------------------------

HeaderFileParserParser::ArrayDeclaratorContext::ArrayDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::ArrayDeclaratorContext::NUMBER() {
  return getToken(HeaderFileParserParser::NUMBER, 0);
}


size_t HeaderFileParserParser::ArrayDeclaratorContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleArrayDeclarator;
}


antlrcpp::Any HeaderFileParserParser::ArrayDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitArrayDeclarator(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::ArrayDeclaratorContext* HeaderFileParserParser::arrayDeclarator() {
  ArrayDeclaratorContext *_localctx = _tracker.createInstance<ArrayDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 26, HeaderFileParserParser::RuleArrayDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(HeaderFileParserParser::T__18);
    setState(156);
    match(HeaderFileParserParser::NUMBER);
    setState(157);
    match(HeaderFileParserParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HeaderFileParserParser::TypeContext* HeaderFileParserParser::FunctionDeclarationContext::type() {
  return getRuleContext<HeaderFileParserParser::TypeContext>(0);
}

tree::TerminalNode* HeaderFileParserParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}

HeaderFileParserParser::ParameterListContext* HeaderFileParserParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<HeaderFileParserParser::ParameterListContext>(0);
}

HeaderFileParserParser::FunctionBodyContext* HeaderFileParserParser::FunctionDeclarationContext::functionBody() {
  return getRuleContext<HeaderFileParserParser::FunctionBodyContext>(0);
}


size_t HeaderFileParserParser::FunctionDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleFunctionDeclaration;
}


antlrcpp::Any HeaderFileParserParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::FunctionDeclarationContext* HeaderFileParserParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, HeaderFileParserParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    type();
    setState(160);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(161);
    match(HeaderFileParserParser::T__20);
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(162);
      parameterList();
    }
    setState(165);
    match(HeaderFileParserParser::T__21);
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__22) {
      setState(166);
      match(HeaderFileParserParser::T__22);
    }
    setState(171);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(169);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(170);
      functionBody();
      break;
    }

    }
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(173);
      match(HeaderFileParserParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtualFunctionDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::VirtualFunctionDeclarationContext::VirtualFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HeaderFileParserParser::TypeContext* HeaderFileParserParser::VirtualFunctionDeclarationContext::type() {
  return getRuleContext<HeaderFileParserParser::TypeContext>(0);
}

tree::TerminalNode* HeaderFileParserParser::VirtualFunctionDeclarationContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}

HeaderFileParserParser::ParameterListContext* HeaderFileParserParser::VirtualFunctionDeclarationContext::parameterList() {
  return getRuleContext<HeaderFileParserParser::ParameterListContext>(0);
}

HeaderFileParserParser::FunctionBodyContext* HeaderFileParserParser::VirtualFunctionDeclarationContext::functionBody() {
  return getRuleContext<HeaderFileParserParser::FunctionBodyContext>(0);
}


size_t HeaderFileParserParser::VirtualFunctionDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleVirtualFunctionDeclaration;
}


antlrcpp::Any HeaderFileParserParser::VirtualFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitVirtualFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::VirtualFunctionDeclarationContext* HeaderFileParserParser::virtualFunctionDeclaration() {
  VirtualFunctionDeclarationContext *_localctx = _tracker.createInstance<VirtualFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, HeaderFileParserParser::RuleVirtualFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(HeaderFileParserParser::T__23);
    setState(177);
    type();
    setState(178);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(179);
    match(HeaderFileParserParser::T__20);
    setState(181);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(180);
      parameterList();
    }
    setState(183);
    match(HeaderFileParserParser::T__21);
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__22) {
      setState(184);
      match(HeaderFileParserParser::T__22);
    }
    setState(189);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(187);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(188);
      functionBody();
      break;
    }

    }
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(191);
      match(HeaderFileParserParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DestructorDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::DestructorDeclarationContext::DestructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::DestructorDeclarationContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}

HeaderFileParserParser::ParameterListContext* HeaderFileParserParser::DestructorDeclarationContext::parameterList() {
  return getRuleContext<HeaderFileParserParser::ParameterListContext>(0);
}

HeaderFileParserParser::FunctionBodyContext* HeaderFileParserParser::DestructorDeclarationContext::functionBody() {
  return getRuleContext<HeaderFileParserParser::FunctionBodyContext>(0);
}


size_t HeaderFileParserParser::DestructorDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleDestructorDeclaration;
}


antlrcpp::Any HeaderFileParserParser::DestructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitDestructorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::DestructorDeclarationContext* HeaderFileParserParser::destructorDeclaration() {
  DestructorDeclarationContext *_localctx = _tracker.createInstance<DestructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, HeaderFileParserParser::RuleDestructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__23) {
      setState(194);
      match(HeaderFileParserParser::T__23);
    }
    setState(197);
    match(HeaderFileParserParser::T__24);
    setState(198);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(199);
    match(HeaderFileParserParser::T__20);
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(200);
      parameterList();
    }
    setState(203);
    match(HeaderFileParserParser::T__21);
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__22) {
      setState(204);
      match(HeaderFileParserParser::T__22);
    }
    setState(209);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(207);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(208);
      functionBody();
      break;
    }

    }
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(211);
      match(HeaderFileParserParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

HeaderFileParserParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HeaderFileParserParser::ParameterContext *> HeaderFileParserParser::ParameterListContext::parameter() {
  return getRuleContexts<HeaderFileParserParser::ParameterContext>();
}

HeaderFileParserParser::ParameterContext* HeaderFileParserParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<HeaderFileParserParser::ParameterContext>(i);
}


size_t HeaderFileParserParser::ParameterListContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleParameterList;
}


antlrcpp::Any HeaderFileParserParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::ParameterListContext* HeaderFileParserParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 34, HeaderFileParserParser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    parameter();
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__8) {
      setState(215);
      match(HeaderFileParserParser::T__8);
      setState(216);
      parameter();
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

HeaderFileParserParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HeaderFileParserParser::TypeContext* HeaderFileParserParser::ParameterContext::type() {
  return getRuleContext<HeaderFileParserParser::TypeContext>(0);
}

tree::TerminalNode* HeaderFileParserParser::ParameterContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}

HeaderFileParserParser::PointerOrReferenceContext* HeaderFileParserParser::ParameterContext::pointerOrReference() {
  return getRuleContext<HeaderFileParserParser::PointerOrReferenceContext>(0);
}


size_t HeaderFileParserParser::ParameterContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleParameter;
}


antlrcpp::Any HeaderFileParserParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::ParameterContext* HeaderFileParserParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 36, HeaderFileParserParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    type();
    setState(224);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__25

    || _la == HeaderFileParserParser::T__26) {
      setState(223);
      pointerOrReference();
    }
    setState(226);
    match(HeaderFileParserParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerOrReferenceContext ------------------------------------------------------------------

HeaderFileParserParser::PointerOrReferenceContext::PointerOrReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HeaderFileParserParser::PointerOrReferenceContext::getRuleIndex() const {
  return HeaderFileParserParser::RulePointerOrReference;
}


antlrcpp::Any HeaderFileParserParser::PointerOrReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitPointerOrReference(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::PointerOrReferenceContext* HeaderFileParserParser::pointerOrReference() {
  PointerOrReferenceContext *_localctx = _tracker.createInstance<PointerOrReferenceContext>(_ctx, getState());
  enterRule(_localctx, 38, HeaderFileParserParser::RulePointerOrReference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    _la = _input->LA(1);
    if (!(_la == HeaderFileParserParser::T__25

    || _la == HeaderFileParserParser::T__26)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

HeaderFileParserParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HeaderFileParserParser::FunctionBodyContext *> HeaderFileParserParser::FunctionBodyContext::functionBody() {
  return getRuleContexts<HeaderFileParserParser::FunctionBodyContext>();
}

HeaderFileParserParser::FunctionBodyContext* HeaderFileParserParser::FunctionBodyContext::functionBody(size_t i) {
  return getRuleContext<HeaderFileParserParser::FunctionBodyContext>(i);
}


size_t HeaderFileParserParser::FunctionBodyContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleFunctionBody;
}


antlrcpp::Any HeaderFileParserParser::FunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::FunctionBodyContext* HeaderFileParserParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 40, HeaderFileParserParser::RuleFunctionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(HeaderFileParserParser::T__1);
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__0)
      | (1ULL << HeaderFileParserParser::T__1)
      | (1ULL << HeaderFileParserParser::T__3)
      | (1ULL << HeaderFileParserParser::T__4)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__8)
      | (1ULL << HeaderFileParserParser::T__9)
      | (1ULL << HeaderFileParserParser::T__10)
      | (1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18)
      | (1ULL << HeaderFileParserParser::T__19)
      | (1ULL << HeaderFileParserParser::T__20)
      | (1ULL << HeaderFileParserParser::T__21)
      | (1ULL << HeaderFileParserParser::T__22)
      | (1ULL << HeaderFileParserParser::T__23)
      | (1ULL << HeaderFileParserParser::T__24)
      | (1ULL << HeaderFileParserParser::T__25)
      | (1ULL << HeaderFileParserParser::T__26)
      | (1ULL << HeaderFileParserParser::STRING_LITERAL)
      | (1ULL << HeaderFileParserParser::CHAR_LITERAL)
      | (1ULL << HeaderFileParserParser::CLASS)
      | (1ULL << HeaderFileParserParser::STRUCT)
      | (1ULL << HeaderFileParserParser::ENUM)
      | (1ULL << HeaderFileParserParser::TYPEDEF)
      | (1ULL << HeaderFileParserParser::IDENTIFIER)
      | (1ULL << HeaderFileParserParser::NUMBER)
      | (1ULL << HeaderFileParserParser::PRAGMADECLARATION)
      | (1ULL << HeaderFileParserParser::TRADER_API_EXPORT)
      | (1ULL << HeaderFileParserParser::MD_API_EXPORT)
      | (1ULL << HeaderFileParserParser::INCLUDEDECLARATION)
      | (1ULL << HeaderFileParserParser::IFDECLARATION)
      | (1ULL << HeaderFileParserParser::ELSEDECLARATION)
      | (1ULL << HeaderFileParserParser::ENDIFDECLARATION)
      | (1ULL << HeaderFileParserParser::COMMENT)
      | (1ULL << HeaderFileParserParser::WHITESPACE))) != 0)) {
      setState(233);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HeaderFileParserParser::T__0:
        case HeaderFileParserParser::T__3:
        case HeaderFileParserParser::T__4:
        case HeaderFileParserParser::T__5:
        case HeaderFileParserParser::T__6:
        case HeaderFileParserParser::T__7:
        case HeaderFileParserParser::T__8:
        case HeaderFileParserParser::T__9:
        case HeaderFileParserParser::T__10:
        case HeaderFileParserParser::T__11:
        case HeaderFileParserParser::T__12:
        case HeaderFileParserParser::T__13:
        case HeaderFileParserParser::T__14:
        case HeaderFileParserParser::T__15:
        case HeaderFileParserParser::T__16:
        case HeaderFileParserParser::T__17:
        case HeaderFileParserParser::T__18:
        case HeaderFileParserParser::T__19:
        case HeaderFileParserParser::T__20:
        case HeaderFileParserParser::T__21:
        case HeaderFileParserParser::T__22:
        case HeaderFileParserParser::T__23:
        case HeaderFileParserParser::T__24:
        case HeaderFileParserParser::T__25:
        case HeaderFileParserParser::T__26:
        case HeaderFileParserParser::STRING_LITERAL:
        case HeaderFileParserParser::CHAR_LITERAL:
        case HeaderFileParserParser::CLASS:
        case HeaderFileParserParser::STRUCT:
        case HeaderFileParserParser::ENUM:
        case HeaderFileParserParser::TYPEDEF:
        case HeaderFileParserParser::IDENTIFIER:
        case HeaderFileParserParser::NUMBER:
        case HeaderFileParserParser::PRAGMADECLARATION:
        case HeaderFileParserParser::TRADER_API_EXPORT:
        case HeaderFileParserParser::MD_API_EXPORT:
        case HeaderFileParserParser::INCLUDEDECLARATION:
        case HeaderFileParserParser::IFDECLARATION:
        case HeaderFileParserParser::ELSEDECLARATION:
        case HeaderFileParserParser::ENDIFDECLARATION:
        case HeaderFileParserParser::COMMENT:
        case HeaderFileParserParser::WHITESPACE: {
          setState(231);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == HeaderFileParserParser::T__1

          || _la == HeaderFileParserParser::T__2)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case HeaderFileParserParser::T__1: {
          setState(232);
          functionBody();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(238);
    match(HeaderFileParserParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> HeaderFileParserParser::_decisionToDFA;
atn::PredictionContextCache HeaderFileParserParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HeaderFileParserParser::_atn;
std::vector<uint16_t> HeaderFileParserParser::_serializedATN;

std::vector<std::string> HeaderFileParserParser::_ruleNames = {
  "headerFile", "classDeclaration", "structDeclaration", "classMember", 
  "structMember", "accessSpecifier", "fieldDeclaration", "type", "defineDirective", 
  "enumDeclaration", "enumMember", "typedefDeclaration", "typeSpecifier", 
  "arrayDeclarator", "functionDeclaration", "virtualFunctionDeclaration", 
  "destructorDeclaration", "parameterList", "parameter", "pointerOrReference", 
  "functionBody"
};

std::vector<std::string> HeaderFileParserParser::_literalNames = {
  "", "':'", "'{'", "'}'", "';'", "'public'", "'protected'", "'private'", 
  "'#define'", "','", "'='", "'char'", "'int'", "'short'", "'long'", "'float'", 
  "'double'", "'unsigned'", "'signed'", "'['", "']'", "'('", "')'", "'const'", 
  "'virtual'", "'~'", "'*'", "'&'", "", "", "'class'", "'struct'", "'enum'", 
  "'typedef'"
};

std::vector<std::string> HeaderFileParserParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "STRING_LITERAL", "CHAR_LITERAL", 
  "CLASS", "STRUCT", "ENUM", "TYPEDEF", "IDENTIFIER", "NUMBER", "PRAGMADECLARATION", 
  "TRADER_API_EXPORT", "MD_API_EXPORT", "INCLUDEDECLARATION", "IFDECLARATION", 
  "ELSEDECLARATION", "ENDIFDECLARATION", "COMMENT", "WHITESPACE"
};

dfa::Vocabulary HeaderFileParserParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HeaderFileParserParser::_tokenNames;

HeaderFileParserParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2e, 0xf3, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x32, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x35, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x3f, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x43, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x46, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x4a, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x52, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x56, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x59, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x5d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x66, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x6f, 0xa, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x7c, 0xa, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0x80, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x7, 0xb, 0x86, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x89, 0xb, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x8d, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x92, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x98, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0xa6, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0xaa, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xae, 0xa, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0xb1, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xb8, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0xbc, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xc0, 0xa, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0xc3, 0xa, 0x11, 0x3, 0x12, 0x5, 0x12, 0xc6, 0xa, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xcc, 0xa, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd0, 0xa, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xd4, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd7, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xdc, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0xdf, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xe3, 0xa, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x7, 0x16, 0xec, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xef, 0xb, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x2, 0x2, 0x17, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2, 0x7, 0x3, 0x2, 0x7, 0x9, 0x4, 
    0x2, 0x1e, 0x1f, 0x24, 0x25, 0x3, 0x2, 0xd, 0x14, 0x3, 0x2, 0x1c, 0x1d, 
    0x3, 0x2, 0x4, 0x5, 0x2, 0x10a, 0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x6e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x72, 0x3, 0x2, 0x2, 0x2, 0x10, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x78, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x18, 0x93, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x32, 0x5, 0x4, 0x3, 0x2, 0x2d, 0x32, 0x5, 0x6, 0x4, 0x2, 
    0x2e, 0x32, 0x5, 0x18, 0xd, 0x2, 0x2f, 0x32, 0x5, 0x14, 0xb, 0x2, 0x30, 
    0x32, 0x5, 0x12, 0xa, 0x2, 0x31, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x37, 0x7, 0x2, 0x2, 0x3, 0x37, 0x3, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x39, 0x7, 0x20, 0x2, 0x2, 0x39, 0x3e, 0x7, 0x24, 0x2, 0x2, 0x3a, 0x3b, 
    0x7, 0x3, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xc, 0x7, 0x2, 0x3c, 0x3d, 0x7, 
    0x24, 0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x44, 0x7, 0x4, 0x2, 0x2, 0x41, 0x43, 0x5, 0x8, 0x5, 0x2, 
    0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x7, 
    0x5, 0x2, 0x2, 0x48, 0x4a, 0x7, 0x6, 0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4c, 0x7, 0x21, 0x2, 0x2, 0x4c, 0x51, 0x7, 0x24, 0x2, 0x2, 
    0x4d, 0x4e, 0x7, 0x3, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0xc, 0x7, 0x2, 0x4f, 
    0x50, 0x7, 0x24, 0x2, 0x2, 0x50, 0x52, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x57, 0x7, 0x4, 0x2, 0x2, 0x54, 0x56, 0x5, 0xa, 
    0x6, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x5c, 0x7, 0x5, 0x2, 0x2, 0x5b, 0x5d, 0x7, 0x6, 0x2, 0x2, 0x5c, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0xc, 0x7, 0x2, 0x5f, 0x60, 0x7, 0x3, 
    0x2, 0x2, 0x60, 0x66, 0x3, 0x2, 0x2, 0x2, 0x61, 0x66, 0x5, 0x20, 0x11, 
    0x2, 0x62, 0x66, 0x5, 0x22, 0x12, 0x2, 0x63, 0x66, 0x5, 0x1e, 0x10, 
    0x2, 0x64, 0x66, 0x5, 0xe, 0x8, 0x2, 0x65, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x61, 0x3, 0x2, 0x2, 0x2, 0x65, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x5, 0xc, 0x7, 0x2, 0x68, 0x69, 0x7, 
    0x3, 0x2, 0x2, 0x69, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6f, 0x5, 0x20, 
    0x11, 0x2, 0x6b, 0x6f, 0x5, 0x22, 0x12, 0x2, 0x6c, 0x6f, 0x5, 0x1e, 
    0x10, 0x2, 0x6d, 0x6f, 0x5, 0xe, 0x8, 0x2, 0x6e, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x9, 0x2, 0x2, 0x2, 0x71, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x10, 0x9, 0x2, 0x73, 0x74, 0x7, 
    0x24, 0x2, 0x2, 0x74, 0x75, 0x7, 0x6, 0x2, 0x2, 0x75, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x77, 0x7, 0x24, 0x2, 0x2, 0x77, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x79, 0x7, 0xa, 0x2, 0x2, 0x79, 0x7b, 0x7, 0x24, 0x2, 0x2, 
    0x7a, 0x7c, 0x9, 0x3, 0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 
    0x7, 0x22, 0x2, 0x2, 0x7e, 0x80, 0x7, 0x24, 0x2, 0x2, 0x7f, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x82, 0x7, 0x4, 0x2, 0x2, 0x82, 0x87, 0x5, 0x16, 0xc, 
    0x2, 0x83, 0x84, 0x7, 0xb, 0x2, 0x2, 0x84, 0x86, 0x5, 0x16, 0xc, 0x2, 
    0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 0x2, 0x2, 0x2, 0x87, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8c, 0x7, 
    0x5, 0x2, 0x2, 0x8b, 0x8d, 0x7, 0x6, 0x2, 0x2, 0x8c, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x91, 0x7, 0x24, 0x2, 0x2, 0x8f, 0x90, 0x7, 0xc, 0x2, 0x2, 
    0x90, 0x92, 0x7, 0x25, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x17, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 
    0x7, 0x23, 0x2, 0x2, 0x94, 0x95, 0x5, 0x1a, 0xe, 0x2, 0x95, 0x97, 0x7, 
    0x24, 0x2, 0x2, 0x96, 0x98, 0x5, 0x1c, 0xf, 0x2, 0x97, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x9a, 0x7, 0x6, 0x2, 0x2, 0x9a, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x9c, 0x9, 0x4, 0x2, 0x2, 0x9c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9e, 0x7, 0x15, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x25, 0x2, 0x2, 0x9f, 0xa0, 
    0x7, 0x16, 0x2, 0x2, 0xa0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x5, 
    0x10, 0x9, 0x2, 0xa2, 0xa3, 0x7, 0x24, 0x2, 0x2, 0xa3, 0xa5, 0x7, 0x17, 
    0x2, 0x2, 0xa4, 0xa6, 0x5, 0x24, 0x13, 0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa9, 0x7, 0x18, 0x2, 0x2, 0xa8, 0xaa, 0x7, 0x19, 0x2, 0x2, 0xa9, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xae, 0x7, 0x6, 0x2, 0x2, 0xac, 0xae, 0x5, 
    0x2a, 0x16, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb0, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xb1, 0x7, 0x6, 0x2, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb3, 0x7, 0x1a, 0x2, 0x2, 0xb3, 0xb4, 0x5, 0x10, 0x9, 0x2, 0xb4, 0xb5, 
    0x7, 0x24, 0x2, 0x2, 0xb5, 0xb7, 0x7, 0x17, 0x2, 0x2, 0xb6, 0xb8, 0x5, 
    0x24, 0x13, 0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x7, 0x18, 0x2, 
    0x2, 0xba, 0xbc, 0x7, 0x19, 0x2, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xc0, 0x7, 0x6, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0x2a, 0x16, 0x2, 0xbf, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 0x7, 0x6, 
    0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc6, 0x7, 0x1a, 0x2, 0x2, 
    0xc5, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x1b, 0x2, 0x2, 0xc8, 0xc9, 
    0x7, 0x24, 0x2, 0x2, 0xc9, 0xcb, 0x7, 0x17, 0x2, 0x2, 0xca, 0xcc, 0x5, 
    0x24, 0x13, 0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0x7, 0x18, 0x2, 
    0x2, 0xce, 0xd0, 0x7, 0x19, 0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd4, 0x7, 0x6, 0x2, 0x2, 0xd2, 0xd4, 0x5, 0x2a, 0x16, 0x2, 0xd3, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x7, 0x6, 
    0x2, 0x2, 0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xdd, 0x5, 0x26, 0x14, 0x2, 
    0xd9, 0xda, 0x7, 0xb, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x26, 0x14, 0x2, 0xdb, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x5, 0x10, 
    0x9, 0x2, 0xe1, 0xe3, 0x5, 0x28, 0x15, 0x2, 0xe2, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0xe5, 0x7, 0x24, 0x2, 0x2, 0xe5, 0x27, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0xe7, 0x9, 0x5, 0x2, 0x2, 0xe7, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xed, 
    0x7, 0x4, 0x2, 0x2, 0xe9, 0xec, 0xa, 0x6, 0x2, 0x2, 0xea, 0xec, 0x5, 
    0x2a, 0x16, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xef, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x5, 0x2, 0x2, 0xf1, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x23, 0x31, 0x33, 0x3e, 0x44, 0x49, 0x51, 
    0x57, 0x5c, 0x65, 0x6e, 0x7b, 0x7f, 0x87, 0x8c, 0x91, 0x97, 0xa5, 0xa9, 
    0xad, 0xb0, 0xb7, 0xbb, 0xbf, 0xc2, 0xc5, 0xcb, 0xcf, 0xd3, 0xd6, 0xdd, 
    0xe2, 0xeb, 0xed, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HeaderFileParserParser::Initializer HeaderFileParserParser::_init;
