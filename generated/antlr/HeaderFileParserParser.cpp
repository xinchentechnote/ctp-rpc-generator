
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

std::vector<HeaderFileParserParser::ClassOrStructDeclarationContext *> HeaderFileParserParser::HeaderFileContext::classOrStructDeclaration() {
  return getRuleContexts<HeaderFileParserParser::ClassOrStructDeclarationContext>();
}

HeaderFileParserParser::ClassOrStructDeclarationContext* HeaderFileParserParser::HeaderFileContext::classOrStructDeclaration(size_t i) {
  return getRuleContext<HeaderFileParserParser::ClassOrStructDeclarationContext>(i);
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
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__0)
      | (1ULL << HeaderFileParserParser::T__5)
      | (1ULL << HeaderFileParserParser::T__13))) != 0)) {
      setState(26);
      classOrStructDeclaration();
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(32);
    match(HeaderFileParserParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrStructDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::ClassOrStructDeclarationContext::ClassOrStructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HeaderFileParserParser::ClassDeclarationContext* HeaderFileParserParser::ClassOrStructDeclarationContext::classDeclaration() {
  return getRuleContext<HeaderFileParserParser::ClassDeclarationContext>(0);
}

HeaderFileParserParser::StructDeclarationContext* HeaderFileParserParser::ClassOrStructDeclarationContext::structDeclaration() {
  return getRuleContext<HeaderFileParserParser::StructDeclarationContext>(0);
}

HeaderFileParserParser::MacroConstantDeclarationContext* HeaderFileParserParser::ClassOrStructDeclarationContext::macroConstantDeclaration() {
  return getRuleContext<HeaderFileParserParser::MacroConstantDeclarationContext>(0);
}


size_t HeaderFileParserParser::ClassOrStructDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleClassOrStructDeclaration;
}


antlrcpp::Any HeaderFileParserParser::ClassOrStructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitClassOrStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::ClassOrStructDeclarationContext* HeaderFileParserParser::classOrStructDeclaration() {
  ClassOrStructDeclarationContext *_localctx = _tracker.createInstance<ClassOrStructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, HeaderFileParserParser::RuleClassOrStructDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HeaderFileParserParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(34);
        classDeclaration();
        break;
      }

      case HeaderFileParserParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(35);
        structDeclaration();
        break;
      }

      case HeaderFileParserParser::T__13: {
        enterOuterAlt(_localctx, 3);
        setState(36);
        macroConstantDeclaration();
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

//----------------- ClassDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 4, HeaderFileParserParser::RuleClassDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    match(HeaderFileParserParser::T__0);
    setState(40);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(45);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__1) {
      setState(41);
      match(HeaderFileParserParser::T__1);
      setState(42);
      accessSpecifier();
      setState(43);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(47);
    match(HeaderFileParserParser::T__2);
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__8)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(48);
      classMember();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    match(HeaderFileParserParser::T__3);
    setState(56);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__4) {
      setState(55);
      match(HeaderFileParserParser::T__4);
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
  enterRule(_localctx, 6, HeaderFileParserParser::RuleStructDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(HeaderFileParserParser::T__5);
    setState(59);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__1) {
      setState(60);
      match(HeaderFileParserParser::T__1);
      setState(61);
      accessSpecifier();
      setState(62);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(66);
    match(HeaderFileParserParser::T__2);
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__8)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(67);
      structMember();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(HeaderFileParserParser::T__3);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__4) {
      setState(74);
      match(HeaderFileParserParser::T__4);
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
  enterRule(_localctx, 8, HeaderFileParserParser::RuleClassMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      accessSpecifier();
      setState(78);
      match(HeaderFileParserParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      functionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(81);
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
  enterRule(_localctx, 10, HeaderFileParserParser::RuleStructMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(84);
      accessSpecifier();
      setState(85);
      match(HeaderFileParserParser::T__1);
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
  enterRule(_localctx, 12, HeaderFileParserParser::RuleAccessSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__6)
      | (1ULL << HeaderFileParserParser::T__7)
      | (1ULL << HeaderFileParserParser::T__8))) != 0))) {
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
  enterRule(_localctx, 14, HeaderFileParserParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    type();
    setState(94);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(95);
    match(HeaderFileParserParser::T__9);
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(96);
      parameterList();
    }
    setState(99);
    match(HeaderFileParserParser::T__10);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__11) {
      setState(100);
      match(HeaderFileParserParser::T__11);
    }
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__4) {
      setState(103);
      match(HeaderFileParserParser::T__4);
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
  enterRule(_localctx, 16, HeaderFileParserParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    type();
    setState(107);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(108);
    match(HeaderFileParserParser::T__4);
   
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
  enterRule(_localctx, 18, HeaderFileParserParser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    parameter();
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__12) {
      setState(111);
      match(HeaderFileParserParser::T__12);
      setState(112);
      parameter();
      setState(117);
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
  enterRule(_localctx, 20, HeaderFileParserParser::RuleParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    type();
    setState(119);
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
  enterRule(_localctx, 22, HeaderFileParserParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(HeaderFileParserParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MacroConstantDeclarationContext ------------------------------------------------------------------

HeaderFileParserParser::MacroConstantDeclarationContext::MacroConstantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::MacroConstantDeclarationContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}


size_t HeaderFileParserParser::MacroConstantDeclarationContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleMacroConstantDeclaration;
}


antlrcpp::Any HeaderFileParserParser::MacroConstantDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitMacroConstantDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::MacroConstantDeclarationContext* HeaderFileParserParser::macroConstantDeclaration() {
  MacroConstantDeclarationContext *_localctx = _tracker.createInstance<MacroConstantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, HeaderFileParserParser::RuleMacroConstantDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(HeaderFileParserParser::T__13);
    setState(124);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__14) {
      setState(125);
      match(HeaderFileParserParser::T__14);
      setState(126);
      matchWildcard();
      setState(127);
      match(HeaderFileParserParser::T__14);
    }
   
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
  "headerFile", "classOrStructDeclaration", "classDeclaration", "structDeclaration", 
  "classMember", "structMember", "accessSpecifier", "functionDeclaration", 
  "fieldDeclaration", "parameterList", "parameter", "type", "macroConstantDeclaration"
};

std::vector<std::string> HeaderFileParserParser::_literalNames = {
  "", "'class'", "':'", "'{'", "'}'", "';'", "'struct'", "'public'", "'protected'", 
  "'private'", "'('", "')'", "'const'", "','", "'#define'", "'''"
};

std::vector<std::string> HeaderFileParserParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", 
  "IFENDIFDECLARATION", "PRAGMADECLARATION", "INCLUDEDECLARATION", "IFDECLARATION", 
  "ENDIFDECLARATION", "COMMENT", "WHITESPACE"
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
    0x3, 0x19, 0x85, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x7, 0x2, 0x1e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x21, 0xb, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x28, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
    0x30, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x34, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x37, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3b, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x43, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x47, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0x4a, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x4e, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x55, 0xa, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x5c, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x64, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x68, 0xa, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0x6b, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x74, 0xa, 0xb, 0xc, 0xb, 
    0xe, 0xb, 0x77, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x83, 
    0xa, 0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 0x3, 0x3, 0x2, 0x9, 0xb, 0x2, 
    0x89, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x29, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x70, 0x3, 0x2, 0x2, 0x2, 0x16, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x1e, 0x5, 0x4, 0x3, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x22, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x23, 0x7, 0x2, 0x2, 0x3, 0x23, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x28, 0x5, 0x6, 0x4, 0x2, 0x25, 0x28, 0x5, 0x8, 0x5, 0x2, 
    0x26, 0x28, 0x5, 0x1a, 0xe, 0x2, 0x27, 0x24, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x2a, 0x2f, 0x7, 
    0x12, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x4, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0xe, 
    0x8, 0x2, 0x2d, 0x2e, 0x7, 0x12, 0x2, 0x2, 0x2e, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x35, 0x7, 0x5, 0x2, 0x2, 0x32, 
    0x34, 0x5, 0xa, 0x6, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x38, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x3a, 0x7, 0x6, 0x2, 0x2, 0x39, 0x3b, 0x7, 0x7, 0x2, 
    0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x8, 0x2, 0x2, 0x3d, 
    0x42, 0x7, 0x12, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x4, 0x2, 0x2, 0x3f, 0x40, 
    0x5, 0xe, 0x8, 0x2, 0x40, 0x41, 0x7, 0x12, 0x2, 0x2, 0x41, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x48, 0x7, 0x5, 0x2, 
    0x2, 0x45, 0x47, 0x5, 0xc, 0x7, 0x2, 0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4d, 0x7, 0x6, 0x2, 0x2, 0x4c, 0x4e, 0x7, 
    0x7, 0x2, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x5, 0xe, 0x8, 
    0x2, 0x50, 0x51, 0x7, 0x4, 0x2, 0x2, 0x51, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x55, 0x5, 0x10, 0x9, 0x2, 0x53, 0x55, 0x5, 0x12, 0xa, 0x2, 0x54, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0xb, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 
    0xe, 0x8, 0x2, 0x57, 0x58, 0x7, 0x4, 0x2, 0x2, 0x58, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5c, 0x5, 0x10, 0x9, 0x2, 0x5a, 0x5c, 0x5, 0x12, 0xa, 
    0x2, 0x5b, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5e, 0x9, 0x2, 0x2, 0x2, 0x5e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 
    0x5, 0x18, 0xd, 0x2, 0x60, 0x61, 0x7, 0x12, 0x2, 0x2, 0x61, 0x63, 0x7, 
    0xc, 0x2, 0x2, 0x62, 0x64, 0x5, 0x14, 0xb, 0x2, 0x63, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x67, 0x7, 0xd, 0x2, 0x2, 0x66, 0x68, 0x7, 0xe, 0x2, 0x2, 
    0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 0x7, 0x7, 0x2, 0x2, 0x6a, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x18, 0xd, 0x2, 0x6d, 0x6e, 0x7, 0x12, 
    0x2, 0x2, 0x6e, 0x6f, 0x7, 0x7, 0x2, 0x2, 0x6f, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x75, 0x5, 0x16, 0xc, 0x2, 0x71, 0x72, 0x7, 0xf, 0x2, 0x2, 
    0x72, 0x74, 0x5, 0x16, 0xc, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x15, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x79, 0x5, 0x18, 0xd, 0x2, 0x79, 0x7a, 0x7, 0x12, 
    0x2, 0x2, 0x7a, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x12, 0x2, 
    0x2, 0x7c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x10, 0x2, 0x2, 
    0x7e, 0x82, 0x7, 0x12, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x11, 0x2, 0x2, 0x80, 
    0x81, 0xb, 0x2, 0x2, 0x2, 0x81, 0x83, 0x7, 0x11, 0x2, 0x2, 0x82, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x11, 0x1f, 0x27, 0x2f, 0x35, 0x3a, 0x42, 0x48, 0x4d, 
    0x54, 0x5b, 0x63, 0x67, 0x6a, 0x75, 0x82, 
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
