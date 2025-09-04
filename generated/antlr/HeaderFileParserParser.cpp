
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
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__11)
      | (1ULL << HeaderFileParserParser::CLASS)
      | (1ULL << HeaderFileParserParser::STRUCT)
      | (1ULL << HeaderFileParserParser::ENUM)
      | (1ULL << HeaderFileParserParser::TYPEDEF))) != 0)) {
      setState(39);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HeaderFileParserParser::CLASS: {
          setState(34);
          classDeclaration();
          break;
        }

        case HeaderFileParserParser::STRUCT: {
          setState(35);
          structDeclaration();
          break;
        }

        case HeaderFileParserParser::TYPEDEF: {
          setState(36);
          typedefDeclaration();
          break;
        }

        case HeaderFileParserParser::ENUM: {
          setState(37);
          enumDeclaration();
          break;
        }

        case HeaderFileParserParser::T__11: {
          setState(38);
          defineDirective();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(44);
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
    setState(46);
    match(HeaderFileParserParser::CLASS);
    setState(47);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__0) {
      setState(48);
      match(HeaderFileParserParser::T__0);
      setState(49);
      accessSpecifier();
      setState(50);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(54);
    match(HeaderFileParserParser::T__1);
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__4)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(55);
      classMember();
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
    match(HeaderFileParserParser::T__2);
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(62);
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
    setState(65);
    match(HeaderFileParserParser::STRUCT);
    setState(66);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__0) {
      setState(67);
      match(HeaderFileParserParser::T__0);
      setState(68);
      accessSpecifier();
      setState(69);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(73);
    match(HeaderFileParserParser::T__1);
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__4)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(74);
      structMember();
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    match(HeaderFileParserParser::T__2);
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(81);
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
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(84);
      accessSpecifier();
      setState(85);
      match(HeaderFileParserParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      functionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(88);
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
    setState(96);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(91);
      accessSpecifier();
      setState(92);
      match(HeaderFileParserParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      functionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(95);
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
    setState(98);
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
  enterRule(_localctx, 12, HeaderFileParserParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    type();
    setState(101);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(102);
    match(HeaderFileParserParser::T__7);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(103);
      parameterList();
    }
    setState(106);
    match(HeaderFileParserParser::T__8);
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__9) {
      setState(107);
      match(HeaderFileParserParser::T__9);
    }
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(110);
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
  enterRule(_localctx, 14, HeaderFileParserParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    type();
    setState(114);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(115);
    match(HeaderFileParserParser::T__3);
   
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
  enterRule(_localctx, 16, HeaderFileParserParser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    parameter();
    setState(122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__10) {
      setState(118);
      match(HeaderFileParserParser::T__10);
      setState(119);
      parameter();
      setState(124);
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
  enterRule(_localctx, 18, HeaderFileParserParser::RuleParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    type();
    setState(126);
    match(HeaderFileParserParser::IDENTIFIER);
   
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
  enterRule(_localctx, 20, HeaderFileParserParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
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
  enterRule(_localctx, 22, HeaderFileParserParser::RuleDefineDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(HeaderFileParserParser::T__11);
    setState(131);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::STRING_LITERAL)
      | (1ULL << HeaderFileParserParser::CHAR_LITERAL)
      | (1ULL << HeaderFileParserParser::IDENTIFIER)
      | (1ULL << HeaderFileParserParser::NUMBER))) != 0)) {
      setState(132);
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
  enterRule(_localctx, 24, HeaderFileParserParser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(HeaderFileParserParser::ENUM);
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(136);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(139);
    match(HeaderFileParserParser::T__1);
    setState(140);
    enumMember();
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__10) {
      setState(141);
      match(HeaderFileParserParser::T__10);
      setState(142);
      enumMember();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
    match(HeaderFileParserParser::T__2);
    setState(150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(149);
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
  enterRule(_localctx, 26, HeaderFileParserParser::RuleEnumMember);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__12) {
      setState(153);
      match(HeaderFileParserParser::T__12);
      setState(154);
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
  enterRule(_localctx, 28, HeaderFileParserParser::RuleTypedefDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(HeaderFileParserParser::TYPEDEF);
    setState(158);
    typeSpecifier();
    setState(159);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(161);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__21) {
      setState(160);
      arrayDeclarator();
    }
    setState(163);
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
  enterRule(_localctx, 30, HeaderFileParserParser::RuleTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__13)
      | (1ULL << HeaderFileParserParser::T__14)
      | (1ULL << HeaderFileParserParser::T__15)
      | (1ULL << HeaderFileParserParser::T__16)
      | (1ULL << HeaderFileParserParser::T__17)
      | (1ULL << HeaderFileParserParser::T__18)
      | (1ULL << HeaderFileParserParser::T__19)
      | (1ULL << HeaderFileParserParser::T__20))) != 0))) {
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
  enterRule(_localctx, 32, HeaderFileParserParser::RuleArrayDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(HeaderFileParserParser::T__21);
    setState(168);
    match(HeaderFileParserParser::NUMBER);
    setState(169);
    match(HeaderFileParserParser::T__22);
   
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
  "structMember", "accessSpecifier", "functionDeclaration", "fieldDeclaration", 
  "parameterList", "parameter", "type", "defineDirective", "enumDeclaration", 
  "enumMember", "typedefDeclaration", "typeSpecifier", "arrayDeclarator"
};

std::vector<std::string> HeaderFileParserParser::_literalNames = {
  "", "':'", "'{'", "'}'", "';'", "'public'", "'protected'", "'private'", 
  "'('", "')'", "'const'", "','", "'#define'", "'='", "'char'", "'int'", 
  "'short'", "'long'", "'float'", "'double'", "'unsigned'", "'signed'", 
  "'['", "']'", "", "", "'class'", "'struct'", "'enum'", "'typedef'"
};

std::vector<std::string> HeaderFileParserParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "STRING_LITERAL", "CHAR_LITERAL", "CLASS", "STRUCT", 
  "ENUM", "TYPEDEF", "IDENTIFIER", "NUMBER", "PRAGMADECLARATION", "INCLUDEDECLARATION", 
  "IFDECLARATION", "ENDIFDECLARATION", "COMMENT", "WHITESPACE"
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
    0x3, 0x27, 0xae, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 
    0x2a, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x2d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x37, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3b, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x3e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x42, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
    0x4a, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x4e, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x51, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x55, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x5c, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x63, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x6b, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x6f, 0xa, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x72, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7b, 0xa, 0xa, 0xc, 0xa, 
    0xe, 0xa, 0x7e, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x88, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x8c, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x7, 0xe, 0x92, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x95, 0xb, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x99, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0x9e, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0xa4, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x2, 0x2, 0x13, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x2, 0x5, 0x3, 0x2, 0x7, 0x9, 0x4, 0x2, 0x1a, 
    0x1b, 0x20, 0x21, 0x3, 0x2, 0x10, 0x17, 0x2, 0xb5, 0x2, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x30, 0x3, 0x2, 0x2, 0x2, 0x6, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x62, 0x3, 0x2, 0x2, 0x2, 0xc, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x66, 0x3, 0x2, 0x2, 0x2, 0x10, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x77, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x82, 0x3, 0x2, 0x2, 0x2, 0x18, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0x24, 0x2a, 0x5, 0x4, 0x3, 0x2, 0x25, 0x2a, 
    0x5, 0x6, 0x4, 0x2, 0x26, 0x2a, 0x5, 0x1e, 0x10, 0x2, 0x27, 0x2a, 0x5, 
    0x1a, 0xe, 0x2, 0x28, 0x2a, 0x5, 0x18, 0xd, 0x2, 0x29, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x25, 0x3, 0x2, 0x2, 0x2, 0x29, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x28, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x2, 0x2, 0x3, 0x2f, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x1c, 0x2, 0x2, 0x31, 0x36, 0x7, 0x20, 
    0x2, 0x2, 0x32, 0x33, 0x7, 0x3, 0x2, 0x2, 0x33, 0x34, 0x5, 0xc, 0x7, 
    0x2, 0x34, 0x35, 0x7, 0x20, 0x2, 0x2, 0x35, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x32, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3c, 0x7, 0x4, 0x2, 0x2, 0x39, 0x3b, 
    0x5, 0x8, 0x5, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x41, 0x7, 0x5, 0x2, 0x2, 0x40, 0x42, 0x7, 0x6, 0x2, 0x2, 
    0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 0x1d, 0x2, 0x2, 0x44, 0x49, 
    0x7, 0x20, 0x2, 0x2, 0x45, 0x46, 0x7, 0x3, 0x2, 0x2, 0x46, 0x47, 0x5, 
    0xc, 0x7, 0x2, 0x47, 0x48, 0x7, 0x20, 0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x45, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4f, 0x7, 0x4, 0x2, 0x2, 
    0x4c, 0x4e, 0x5, 0xa, 0x6, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x54, 0x7, 0x5, 0x2, 0x2, 0x53, 0x55, 0x7, 0x6, 
    0x2, 0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x7, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0xc, 0x7, 0x2, 
    0x57, 0x58, 0x7, 0x3, 0x2, 0x2, 0x58, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x59, 
    0x5c, 0x5, 0xe, 0x8, 0x2, 0x5a, 0x5c, 0x5, 0x10, 0x9, 0x2, 0x5b, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0xc, 
    0x7, 0x2, 0x5e, 0x5f, 0x7, 0x3, 0x2, 0x2, 0x5f, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x63, 0x5, 0xe, 0x8, 0x2, 0x61, 0x63, 0x5, 0x10, 0x9, 0x2, 
    0x62, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0xb, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 
    0x9, 0x2, 0x2, 0x2, 0x65, 0xd, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x5, 
    0x16, 0xc, 0x2, 0x67, 0x68, 0x7, 0x20, 0x2, 0x2, 0x68, 0x6a, 0x7, 0xa, 
    0x2, 0x2, 0x69, 0x6b, 0x5, 0x12, 0xa, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6e, 0x7, 0xb, 0x2, 0x2, 0x6d, 0x6f, 0x7, 0xc, 0x2, 0x2, 0x6e, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x7, 0x6, 0x2, 0x2, 0x71, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x74, 0x5, 0x16, 0xc, 0x2, 0x74, 0x75, 0x7, 0x20, 0x2, 
    0x2, 0x75, 0x76, 0x7, 0x6, 0x2, 0x2, 0x76, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x7c, 0x5, 0x14, 0xb, 0x2, 0x78, 0x79, 0x7, 0xd, 0x2, 0x2, 0x79, 
    0x7b, 0x5, 0x14, 0xb, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x5, 0x16, 0xc, 0x2, 0x80, 0x81, 0x7, 0x20, 0x2, 
    0x2, 0x81, 0x15, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x7, 0x20, 0x2, 0x2, 
    0x83, 0x17, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0xe, 0x2, 0x2, 0x85, 
    0x87, 0x7, 0x20, 0x2, 0x2, 0x86, 0x88, 0x9, 0x3, 0x2, 0x2, 0x87, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8b, 0x7, 0x1e, 0x2, 0x2, 0x8a, 0x8c, 0x7, 0x20, 
    0x2, 0x2, 0x8b, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x4, 0x2, 0x2, 
    0x8e, 0x93, 0x5, 0x1c, 0xf, 0x2, 0x8f, 0x90, 0x7, 0xd, 0x2, 0x2, 0x90, 
    0x92, 0x5, 0x1c, 0xf, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x98, 0x7, 0x5, 0x2, 0x2, 0x97, 0x99, 0x7, 0x6, 0x2, 
    0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9d, 0x7, 0x20, 0x2, 0x2, 0x9b, 
    0x9c, 0x7, 0xf, 0x2, 0x2, 0x9c, 0x9e, 0x7, 0x21, 0x2, 0x2, 0x9d, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x1f, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x20, 
    0x11, 0x2, 0xa1, 0xa3, 0x7, 0x20, 0x2, 0x2, 0xa2, 0xa4, 0x5, 0x22, 0x12, 
    0x2, 0xa3, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x6, 0x2, 0x2, 0xa6, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x9, 0x4, 0x2, 0x2, 0xa8, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x18, 0x2, 0x2, 0xaa, 0xab, 0x7, 
    0x21, 0x2, 0x2, 0xab, 0xac, 0x7, 0x19, 0x2, 0x2, 0xac, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x29, 0x2b, 0x36, 0x3c, 0x41, 0x49, 0x4f, 0x54, 0x5b, 
    0x62, 0x6a, 0x6e, 0x71, 0x7c, 0x87, 0x8b, 0x93, 0x98, 0x9d, 0xa3, 
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
