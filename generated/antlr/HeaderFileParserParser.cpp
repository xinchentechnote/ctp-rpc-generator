
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
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__8)
      | (1ULL << HeaderFileParserParser::CLASS)
      | (1ULL << HeaderFileParserParser::STRUCT)
      | (1ULL << HeaderFileParserParser::ENUM)
      | (1ULL << HeaderFileParserParser::TYPEDEF))) != 0)) {
      setState(51);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HeaderFileParserParser::CLASS: {
          setState(46);
          classDeclaration();
          break;
        }

        case HeaderFileParserParser::STRUCT: {
          setState(47);
          structDeclaration();
          break;
        }

        case HeaderFileParserParser::TYPEDEF: {
          setState(48);
          typedefDeclaration();
          break;
        }

        case HeaderFileParserParser::ENUM: {
          setState(49);
          enumDeclaration();
          break;
        }

        case HeaderFileParserParser::T__8: {
          setState(50);
          defineDirective();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(55);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(56);
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
    setState(58);
    match(HeaderFileParserParser::CLASS);
    setState(59);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__0) {
      setState(60);
      match(HeaderFileParserParser::T__0);
      setState(61);
      accessSpecifier();
      setState(62);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(66);
    match(HeaderFileParserParser::T__1);
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__4)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18)
      | (1ULL << HeaderFileParserParser::T__23)
      | (1ULL << HeaderFileParserParser::T__24)
      | (1ULL << HeaderFileParserParser::T__26)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(67);
      classMember();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(HeaderFileParserParser::T__2);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(74);
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
    setState(77);
    match(HeaderFileParserParser::STRUCT);
    setState(78);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(83);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__0) {
      setState(79);
      match(HeaderFileParserParser::T__0);
      setState(80);
      accessSpecifier();
      setState(81);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(85);
    match(HeaderFileParserParser::T__1);
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__4)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18)
      | (1ULL << HeaderFileParserParser::T__23)
      | (1ULL << HeaderFileParserParser::T__24)
      | (1ULL << HeaderFileParserParser::T__26)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(86);
      structMember();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
    match(HeaderFileParserParser::T__2);
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(93);
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

HeaderFileParserParser::StaticFunctionDeclarationContext* HeaderFileParserParser::ClassMemberContext::staticFunctionDeclaration() {
  return getRuleContext<HeaderFileParserParser::StaticFunctionDeclarationContext>(0);
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
    setState(104);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(96);
      accessSpecifier();
      setState(97);
      match(HeaderFileParserParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(99);
      virtualFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(100);
      staticFunctionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(101);
      destructorDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(102);
      functionDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(103);
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

HeaderFileParserParser::StaticFunctionDeclarationContext* HeaderFileParserParser::StructMemberContext::staticFunctionDeclaration() {
  return getRuleContext<HeaderFileParserParser::StaticFunctionDeclarationContext>(0);
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
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(106);
      accessSpecifier();
      setState(107);
      match(HeaderFileParserParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(109);
      virtualFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(110);
      staticFunctionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(111);
      destructorDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(112);
      functionDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(113);
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
    setState(116);
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
    setState(118);
    type();
    setState(119);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(120);
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

HeaderFileParserParser::TypeSpecifierContext* HeaderFileParserParser::TypeContext::typeSpecifier() {
  return getRuleContext<HeaderFileParserParser::TypeSpecifierContext>(0);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__7) {
      setState(122);
      match(HeaderFileParserParser::T__7);
    }
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HeaderFileParserParser::T__11:
      case HeaderFileParserParser::T__12:
      case HeaderFileParserParser::T__13:
      case HeaderFileParserParser::T__14:
      case HeaderFileParserParser::T__15:
      case HeaderFileParserParser::T__16:
      case HeaderFileParserParser::T__17:
      case HeaderFileParserParser::T__18: {
        setState(125);
        typeSpecifier();
        break;
      }

      case HeaderFileParserParser::IDENTIFIER: {
        setState(126);
        match(HeaderFileParserParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
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
    setState(129);
    match(HeaderFileParserParser::T__8);
    setState(130);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(132);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::STRING_LITERAL)
      | (1ULL << HeaderFileParserParser::CHAR_LITERAL)
      | (1ULL << HeaderFileParserParser::IDENTIFIER)
      | (1ULL << HeaderFileParserParser::NUMBER))) != 0)) {
      setState(131);
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
    setState(134);
    match(HeaderFileParserParser::ENUM);
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(135);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(138);
    match(HeaderFileParserParser::T__1);
    setState(139);
    enumMember();
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__9) {
      setState(140);
      match(HeaderFileParserParser::T__9);
      setState(141);
      enumMember();
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(147);
    match(HeaderFileParserParser::T__2);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(148);
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
    setState(151);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__10) {
      setState(152);
      match(HeaderFileParserParser::T__10);
      setState(153);
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
    setState(156);
    match(HeaderFileParserParser::TYPEDEF);
    setState(157);
    typeSpecifier();
    setState(158);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__19) {
      setState(159);
      arrayDeclarator();
    }
    setState(162);
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
    setState(164);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18))) != 0))) {
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
    setState(166);
    match(HeaderFileParserParser::T__19);
    setState(167);
    match(HeaderFileParserParser::NUMBER);
    setState(168);
    match(HeaderFileParserParser::T__20);
   
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
    setState(170);
    type();
    setState(171);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(172);
    match(HeaderFileParserParser::T__21);
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(173);
      parameterList();
    }
    setState(176);
    match(HeaderFileParserParser::T__22);
    setState(178);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(177);
      match(HeaderFileParserParser::T__7);
      break;
    }

    }
    setState(182);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(180);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(181);
      functionBody();
      break;
    }

    }
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(184);
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
    setState(187);
    match(HeaderFileParserParser::T__23);
    setState(188);
    type();
    setState(189);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(190);
    match(HeaderFileParserParser::T__21);
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(191);
      parameterList();
    }
    setState(194);
    match(HeaderFileParserParser::T__22);
    setState(196);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(195);
      match(HeaderFileParserParser::T__7);
      break;
    }

    }
    setState(200);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(198);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(199);
      functionBody();
      break;
    }

    }
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(202);
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

//----------------- StaticFunctionDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::StaticFunctionDeclarationContext::StaticFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HeaderFileParserParser::TypeContext* HeaderFileParserParser::StaticFunctionDeclarationContext::type() {
  return getRuleContext<HeaderFileParserParser::TypeContext>(0);
}

tree::TerminalNode* HeaderFileParserParser::StaticFunctionDeclarationContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}

HeaderFileParserParser::ParameterListContext* HeaderFileParserParser::StaticFunctionDeclarationContext::parameterList() {
  return getRuleContext<HeaderFileParserParser::ParameterListContext>(0);
}

HeaderFileParserParser::FunctionBodyContext* HeaderFileParserParser::StaticFunctionDeclarationContext::functionBody() {
  return getRuleContext<HeaderFileParserParser::FunctionBodyContext>(0);
}


size_t HeaderFileParserParser::StaticFunctionDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleStaticFunctionDeclaration;
}


antlrcpp::Any HeaderFileParserParser::StaticFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitStaticFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::StaticFunctionDeclarationContext* HeaderFileParserParser::staticFunctionDeclaration() {
  StaticFunctionDeclarationContext *_localctx = _tracker.createInstance<StaticFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, HeaderFileParserParser::RuleStaticFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(HeaderFileParserParser::T__24);
    setState(206);
    type();
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__25) {
      setState(207);
      match(HeaderFileParserParser::T__25);
    }
    setState(210);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(211);
    match(HeaderFileParserParser::T__21);
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(212);
      parameterList();
    }
    setState(215);
    match(HeaderFileParserParser::T__22);
    setState(217);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(216);
      match(HeaderFileParserParser::T__7);
      break;
    }

    }
    setState(221);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(219);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(220);
      functionBody();
      break;
    }

    }
    setState(224);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(223);
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
  enterRule(_localctx, 34, HeaderFileParserParser::RuleDestructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__23) {
      setState(226);
      match(HeaderFileParserParser::T__23);
    }
    setState(229);
    match(HeaderFileParserParser::T__26);
    setState(230);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(231);
    match(HeaderFileParserParser::T__21);
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::T__12)
      | (1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(232);
      parameterList();
    }
    setState(235);
    match(HeaderFileParserParser::T__22);
    setState(237);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(236);
      match(HeaderFileParserParser::T__7);
      break;
    }

    }
    setState(241);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(239);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(240);
      functionBody();
      break;
    }

    }
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(243);
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
  enterRule(_localctx, 36, HeaderFileParserParser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    parameter();
    setState(251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__9) {
      setState(247);
      match(HeaderFileParserParser::T__9);
      setState(248);
      parameter();
      setState(253);
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

HeaderFileParserParser::DefaultValueContext* HeaderFileParserParser::ParameterContext::defaultValue() {
  return getRuleContext<HeaderFileParserParser::DefaultValueContext>(0);
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
  enterRule(_localctx, 38, HeaderFileParserParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    type();
    setState(256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__25

    || _la == HeaderFileParserParser::T__27) {
      setState(255);
      pointerOrReference();
    }
    setState(258);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(261);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__10) {
      setState(259);
      match(HeaderFileParserParser::T__10);
      setState(260);
      defaultValue();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

HeaderFileParserParser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::DefaultValueContext::NUMBER() {
  return getToken(HeaderFileParserParser::NUMBER, 0);
}

tree::TerminalNode* HeaderFileParserParser::DefaultValueContext::STRING_LITERAL() {
  return getToken(HeaderFileParserParser::STRING_LITERAL, 0);
}

tree::TerminalNode* HeaderFileParserParser::DefaultValueContext::CHAR_LITERAL() {
  return getToken(HeaderFileParserParser::CHAR_LITERAL, 0);
}

tree::TerminalNode* HeaderFileParserParser::DefaultValueContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}


size_t HeaderFileParserParser::DefaultValueContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleDefaultValue;
}


antlrcpp::Any HeaderFileParserParser::DefaultValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitDefaultValue(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::DefaultValueContext* HeaderFileParserParser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 40, HeaderFileParserParser::RuleDefaultValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
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
  enterRule(_localctx, 42, HeaderFileParserParser::RulePointerOrReference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    _la = _input->LA(1);
    if (!(_la == HeaderFileParserParser::T__25

    || _la == HeaderFileParserParser::T__27)) {
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
  enterRule(_localctx, 44, HeaderFileParserParser::RuleFunctionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    match(HeaderFileParserParser::T__1);
    setState(272);
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
      | (1ULL << HeaderFileParserParser::T__27)
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
      setState(270);
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
        case HeaderFileParserParser::T__27:
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
          setState(268);
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
          setState(269);
          functionBody();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(275);
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
  "staticFunctionDeclaration", "destructorDeclaration", "parameterList", 
  "parameter", "defaultValue", "pointerOrReference", "functionBody"
};

std::vector<std::string> HeaderFileParserParser::_literalNames = {
  "", "':'", "'{'", "'}'", "';'", "'public'", "'protected'", "'private'", 
  "'const'", "'#define'", "','", "'='", "'char'", "'int'", "'short'", "'long'", 
  "'float'", "'double'", "'unsigned'", "'signed'", "'['", "']'", "'('", 
  "')'", "'virtual'", "'static'", "'*'", "'~'", "'&'", "", "", "'class'", 
  "'struct'", "'enum'", "'typedef'"
};

std::vector<std::string> HeaderFileParserParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "STRING_LITERAL", "CHAR_LITERAL", 
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
    0x3, 0x2f, 0x118, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x36, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x39, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x43, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x47, 0xa, 0x3, 0xc, 0x3, 0xe, 
    0x3, 0x4a, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4e, 0xa, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x56, 
    0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x5a, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x5d, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x61, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x6b, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x75, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x5, 
    0x9, 0x7e, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x82, 0xa, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x87, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x8b, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0x91, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x94, 0xb, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x98, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x9d, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xa3, 
    0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0xb1, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xb5, 0xa, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xb9, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0xbc, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xc3, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xc7, 0xa, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xcb, 0xa, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0xce, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd3, 
    0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd8, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xdc, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0xe0, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0xe3, 0xa, 0x12, 0x3, 
    0x13, 0x5, 0x13, 0xe6, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x5, 0x13, 0xec, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xf0, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xf4, 0xa, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0xf7, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0xfc, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xff, 0xb, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0x103, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x108, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x111, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x114, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x2, 0x2, 
    0x19, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x2, 
    0x7, 0x3, 0x2, 0x7, 0x9, 0x4, 0x2, 0x1f, 0x20, 0x25, 0x26, 0x3, 0x2, 
    0xe, 0x15, 0x4, 0x2, 0x1c, 0x1c, 0x1e, 0x1e, 0x3, 0x2, 0x4, 0x5, 0x2, 
    0x138, 0x2, 0x37, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x6a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x76, 0x3, 0x2, 0x2, 0x2, 0xe, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x88, 0x3, 0x2, 0x2, 0x2, 0x16, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xac, 0x3, 0x2, 0x2, 0x2, 0x20, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x24, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x28, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x109, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x10b, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x36, 0x5, 0x4, 0x3, 0x2, 
    0x31, 0x36, 0x5, 0x6, 0x4, 0x2, 0x32, 0x36, 0x5, 0x18, 0xd, 0x2, 0x33, 
    0x36, 0x5, 0x14, 0xb, 0x2, 0x34, 0x36, 0x5, 0x12, 0xa, 0x2, 0x35, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x31, 0x3, 0x2, 0x2, 0x2, 0x35, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x2, 0x2, 0x3, 0x3b, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x21, 0x2, 0x2, 0x3d, 0x42, 
    0x7, 0x25, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x3, 0x2, 0x2, 0x3f, 0x40, 0x5, 
    0xc, 0x7, 0x2, 0x40, 0x41, 0x7, 0x25, 0x2, 0x2, 0x41, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x48, 0x7, 0x4, 0x2, 0x2, 
    0x45, 0x47, 0x5, 0x8, 0x5, 0x2, 0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x4d, 0x7, 0x5, 0x2, 0x2, 0x4c, 0x4e, 0x7, 0x6, 
    0x2, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x22, 0x2, 0x2, 
    0x50, 0x55, 0x7, 0x25, 0x2, 0x2, 0x51, 0x52, 0x7, 0x3, 0x2, 0x2, 0x52, 
    0x53, 0x5, 0xc, 0x7, 0x2, 0x53, 0x54, 0x7, 0x25, 0x2, 0x2, 0x54, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x51, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5b, 0x7, 0x4, 
    0x2, 0x2, 0x58, 0x5a, 0x5, 0xa, 0x6, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 0x7, 0x5, 0x2, 0x2, 0x5f, 0x61, 
    0x7, 0x6, 0x2, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x7, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x5, 0xc, 
    0x7, 0x2, 0x63, 0x64, 0x7, 0x3, 0x2, 0x2, 0x64, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x6b, 0x5, 0x20, 0x11, 0x2, 0x66, 0x6b, 0x5, 0x22, 0x12, 
    0x2, 0x67, 0x6b, 0x5, 0x24, 0x13, 0x2, 0x68, 0x6b, 0x5, 0x1e, 0x10, 
    0x2, 0x69, 0x6b, 0x5, 0xe, 0x8, 0x2, 0x6a, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x6a, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x5, 
    0xc, 0x7, 0x2, 0x6d, 0x6e, 0x7, 0x3, 0x2, 0x2, 0x6e, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x75, 0x5, 0x20, 0x11, 0x2, 0x70, 0x75, 0x5, 0x22, 0x12, 
    0x2, 0x71, 0x75, 0x5, 0x24, 0x13, 0x2, 0x72, 0x75, 0x5, 0x1e, 0x10, 
    0x2, 0x73, 0x75, 0x5, 0xe, 0x8, 0x2, 0x74, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x74, 0x70, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0xb, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x9, 
    0x2, 0x2, 0x2, 0x77, 0xd, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x5, 0x10, 
    0x9, 0x2, 0x79, 0x7a, 0x7, 0x25, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x6, 0x2, 
    0x2, 0x7b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 0x7, 0xa, 0x2, 0x2, 
    0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x82, 0x5, 0x1a, 0xe, 0x2, 0x80, 0x82, 
    0x7, 0x25, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x11, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0xb, 
    0x2, 0x2, 0x84, 0x86, 0x7, 0x25, 0x2, 0x2, 0x85, 0x87, 0x9, 0x3, 0x2, 
    0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x87, 0x13, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x7, 0x23, 0x2, 0x2, 0x89, 
    0x8b, 0x7, 0x25, 0x2, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 
    0x4, 0x2, 0x2, 0x8d, 0x92, 0x5, 0x16, 0xc, 0x2, 0x8e, 0x8f, 0x7, 0xc, 
    0x2, 0x2, 0x8f, 0x91, 0x5, 0x16, 0xc, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x94, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x7, 0x5, 0x2, 0x2, 0x96, 0x98, 
    0x7, 0x6, 0x2, 0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x15, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x7, 0x25, 
    0x2, 0x2, 0x9a, 0x9b, 0x7, 0xd, 0x2, 0x2, 0x9b, 0x9d, 0x7, 0x26, 0x2, 
    0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x24, 0x2, 0x2, 0x9f, 
    0xa0, 0x5, 0x1a, 0xe, 0x2, 0xa0, 0xa2, 0x7, 0x25, 0x2, 0x2, 0xa1, 0xa3, 
    0x5, 0x1c, 0xf, 0x2, 0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x6, 
    0x2, 0x2, 0xa5, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x9, 0x4, 0x2, 
    0x2, 0xa7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x16, 0x2, 0x2, 
    0xa9, 0xaa, 0x7, 0x26, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x17, 0x2, 0x2, 0xab, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x5, 0x10, 0x9, 0x2, 0xad, 0xae, 
    0x7, 0x25, 0x2, 0x2, 0xae, 0xb0, 0x7, 0x18, 0x2, 0x2, 0xaf, 0xb1, 0x5, 
    0x26, 0x14, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x19, 0x2, 
    0x2, 0xb3, 0xb5, 0x7, 0xa, 0x2, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb9, 0x7, 0x6, 0x2, 0x2, 0xb7, 0xb9, 0x5, 0x2e, 0x18, 0x2, 0xb8, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbc, 0x7, 0x6, 
    0x2, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x1a, 0x2, 0x2, 
    0xbe, 0xbf, 0x5, 0x10, 0x9, 0x2, 0xbf, 0xc0, 0x7, 0x25, 0x2, 0x2, 0xc0, 
    0xc2, 0x7, 0x18, 0x2, 0x2, 0xc1, 0xc3, 0x5, 0x26, 0x14, 0x2, 0xc2, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc4, 0xc6, 0x7, 0x19, 0x2, 0x2, 0xc5, 0xc7, 0x7, 0xa, 
    0x2, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xcb, 0x7, 0x6, 0x2, 0x2, 
    0xc9, 0xcb, 0x5, 0x2e, 0x18, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0xce, 0x7, 0x6, 0x2, 0x2, 0xcd, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x7, 0x1b, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x10, 0x9, 
    0x2, 0xd1, 0xd3, 0x7, 0x1c, 0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x7, 0x25, 0x2, 0x2, 0xd5, 0xd7, 0x7, 0x18, 0x2, 0x2, 0xd6, 0xd8, 
    0x5, 0x26, 0x14, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdb, 0x7, 0x19, 
    0x2, 0x2, 0xda, 0xdc, 0x7, 0xa, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xe0, 0x7, 0x6, 0x2, 0x2, 0xde, 0xe0, 0x5, 0x2e, 0x18, 0x2, 0xdf, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe3, 0x7, 
    0x6, 0x2, 0x2, 0xe2, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0x23, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe6, 0x7, 0x1a, 0x2, 
    0x2, 0xe5, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x1d, 0x2, 0x2, 0xe8, 
    0xe9, 0x7, 0x25, 0x2, 0x2, 0xe9, 0xeb, 0x7, 0x18, 0x2, 0x2, 0xea, 0xec, 
    0x5, 0x26, 0x14, 0x2, 0xeb, 0xea, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 0x7, 0x19, 
    0x2, 0x2, 0xee, 0xf0, 0x7, 0xa, 0x2, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xf4, 0x7, 0x6, 0x2, 0x2, 0xf2, 0xf4, 0x5, 0x2e, 0x18, 0x2, 0xf3, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf7, 0x7, 
    0x6, 0x2, 0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0x25, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfd, 0x5, 0x28, 0x15, 
    0x2, 0xf9, 0xfa, 0x7, 0xc, 0x2, 0x2, 0xfa, 0xfc, 0x5, 0x28, 0x15, 0x2, 
    0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x5, 
    0x10, 0x9, 0x2, 0x101, 0x103, 0x5, 0x2c, 0x17, 0x2, 0x102, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0x107, 0x7, 0x25, 0x2, 0x2, 0x105, 0x106, 0x7, 
    0xd, 0x2, 0x2, 0x106, 0x108, 0x5, 0x2a, 0x16, 0x2, 0x107, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x109, 0x10a, 0x9, 0x3, 0x2, 0x2, 0x10a, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0x10c, 0x9, 0x5, 0x2, 0x2, 0x10c, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x112, 0x7, 0x4, 0x2, 0x2, 0x10e, 0x111, 0xa, 0x6, 0x2, 0x2, 
    0x10f, 0x111, 0x5, 0x2e, 0x18, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 
    0x110, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x114, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x113, 0x115, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 0x3, 0x2, 0x2, 0x2, 
    0x115, 0x116, 0x7, 0x5, 0x2, 0x2, 0x116, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x35, 0x37, 0x42, 0x48, 0x4d, 0x55, 0x5b, 0x60, 0x6a, 0x74, 0x7d, 0x81, 
    0x86, 0x8a, 0x92, 0x97, 0x9c, 0xa2, 0xb0, 0xb4, 0xb8, 0xbb, 0xc2, 0xc6, 
    0xca, 0xcd, 0xd2, 0xd7, 0xdb, 0xdf, 0xe2, 0xe5, 0xeb, 0xef, 0xf3, 0xf6, 
    0xfd, 0x102, 0x107, 0x110, 0x112, 
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
