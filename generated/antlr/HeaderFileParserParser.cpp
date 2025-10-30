
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
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::T__8)
      | (1ULL << HeaderFileParserParser::CLASS)
      | (1ULL << HeaderFileParserParser::STRUCT)
      | (1ULL << HeaderFileParserParser::ENUM)
      | (1ULL << HeaderFileParserParser::TYPEDEF))) != 0)) {
      setState(53);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HeaderFileParserParser::CLASS: {
          setState(48);
          classDeclaration();
          break;
        }

        case HeaderFileParserParser::STRUCT: {
          setState(49);
          structDeclaration();
          break;
        }

        case HeaderFileParserParser::TYPEDEF: {
          setState(50);
          typedefDeclaration();
          break;
        }

        case HeaderFileParserParser::ENUM: {
          setState(51);
          enumDeclaration();
          break;
        }

        case HeaderFileParserParser::T__8: {
          setState(52);
          defineDirective();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
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

std::vector<HeaderFileParserParser::MacroModifierContext *> HeaderFileParserParser::ClassDeclarationContext::macroModifier() {
  return getRuleContexts<HeaderFileParserParser::MacroModifierContext>();
}

HeaderFileParserParser::MacroModifierContext* HeaderFileParserParser::ClassDeclarationContext::macroModifier(size_t i) {
  return getRuleContext<HeaderFileParserParser::MacroModifierContext>(i);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(HeaderFileParserParser::CLASS);
    setState(64);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(61);
        macroModifier(); 
      }
      setState(66);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(67);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(72);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__0) {
      setState(68);
      match(HeaderFileParserParser::T__0);
      setState(69);
      accessSpecifier();
      setState(70);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(74);
    match(HeaderFileParserParser::T__1);
    setState(78);
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
      | (1ULL << HeaderFileParserParser::T__24)
      | (1ULL << HeaderFileParserParser::T__26)
      | (1ULL << HeaderFileParserParser::T__27)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(75);
      classMember();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(81);
    match(HeaderFileParserParser::T__2);
    setState(83);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(82);
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

//----------------- MacroModifierContext ------------------------------------------------------------------

HeaderFileParserParser::MacroModifierContext::MacroModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HeaderFileParserParser::MacroModifierContext::IDENTIFIER() {
  return getToken(HeaderFileParserParser::IDENTIFIER, 0);
}


size_t HeaderFileParserParser::MacroModifierContext::getRuleIndex() const {
  return HeaderFileParserParser::RuleMacroModifier;
}


antlrcpp::Any HeaderFileParserParser::MacroModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HeaderFileParserVisitor*>(visitor))
    return parserVisitor->visitMacroModifier(this);
  else
    return visitor->visitChildren(this);
}

HeaderFileParserParser::MacroModifierContext* HeaderFileParserParser::macroModifier() {
  MacroModifierContext *_localctx = _tracker.createInstance<MacroModifierContext>(_ctx, getState());
  enterRule(_localctx, 4, HeaderFileParserParser::RuleMacroModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(HeaderFileParserParser::IDENTIFIER);
   
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
  enterRule(_localctx, 6, HeaderFileParserParser::RuleStructDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(HeaderFileParserParser::STRUCT);
    setState(88);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__0) {
      setState(89);
      match(HeaderFileParserParser::T__0);
      setState(90);
      accessSpecifier();
      setState(91);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(95);
    match(HeaderFileParserParser::T__1);
    setState(99);
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
      | (1ULL << HeaderFileParserParser::T__24)
      | (1ULL << HeaderFileParserParser::T__26)
      | (1ULL << HeaderFileParserParser::T__27)
      | (1ULL << HeaderFileParserParser::IDENTIFIER))) != 0)) {
      setState(96);
      structMember();
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(102);
    match(HeaderFileParserParser::T__2);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(103);
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
  enterRule(_localctx, 8, HeaderFileParserParser::RuleClassMember);

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
  enterRule(_localctx, 10, HeaderFileParserParser::RuleStructMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(116);
      accessSpecifier();
      setState(117);
      match(HeaderFileParserParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(119);
      virtualFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(120);
      staticFunctionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(121);
      destructorDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(122);
      functionDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(123);
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
    setState(126);
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
  enterRule(_localctx, 14, HeaderFileParserParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    type();
    setState(129);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(130);
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
  enterRule(_localctx, 16, HeaderFileParserParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__7) {
      setState(132);
      match(HeaderFileParserParser::T__7);
    }
    setState(137);
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
        setState(135);
        typeSpecifier();
        break;
      }

      case HeaderFileParserParser::IDENTIFIER: {
        setState(136);
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
  enterRule(_localctx, 18, HeaderFileParserParser::RuleDefineDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(HeaderFileParserParser::T__8);
    setState(140);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HeaderFileParserParser::STRING_LITERAL)
      | (1ULL << HeaderFileParserParser::CHAR_LITERAL)
      | (1ULL << HeaderFileParserParser::IDENTIFIER)
      | (1ULL << HeaderFileParserParser::NUMBER))) != 0)) {
      setState(141);
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
  enterRule(_localctx, 20, HeaderFileParserParser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(HeaderFileParserParser::ENUM);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::IDENTIFIER) {
      setState(145);
      match(HeaderFileParserParser::IDENTIFIER);
    }
    setState(148);
    match(HeaderFileParserParser::T__1);
    setState(149);
    enumMember();
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__9) {
      setState(150);
      match(HeaderFileParserParser::T__9);
      setState(151);
      enumMember();
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(157);
    match(HeaderFileParserParser::T__2);
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(158);
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
  enterRule(_localctx, 22, HeaderFileParserParser::RuleEnumMember);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__10) {
      setState(162);
      match(HeaderFileParserParser::T__10);
      setState(163);
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
  enterRule(_localctx, 24, HeaderFileParserParser::RuleTypedefDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(HeaderFileParserParser::TYPEDEF);
    setState(167);
    typeSpecifier();
    setState(168);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__19) {
      setState(169);
      arrayDeclarator();
    }
    setState(172);
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
  enterRule(_localctx, 26, HeaderFileParserParser::RuleTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
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
  enterRule(_localctx, 28, HeaderFileParserParser::RuleArrayDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(HeaderFileParserParser::T__19);
    setState(177);
    match(HeaderFileParserParser::NUMBER);
    setState(178);
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
  enterRule(_localctx, 30, HeaderFileParserParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    type();
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__21) {
      setState(181);
      match(HeaderFileParserParser::T__21);
    }
    setState(184);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(185);
    match(HeaderFileParserParser::T__22);
    setState(187);
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
      setState(186);
      parameterList();
    }
    setState(189);
    match(HeaderFileParserParser::T__23);
    setState(191);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(190);
      match(HeaderFileParserParser::T__7);
      break;
    }

    }
    setState(195);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(193);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(194);
      functionBody();
      break;
    }

    }
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(197);
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
  enterRule(_localctx, 32, HeaderFileParserParser::RuleVirtualFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(HeaderFileParserParser::T__24);
    setState(201);
    type();
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__21) {
      setState(202);
      match(HeaderFileParserParser::T__21);
    }
    setState(205);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(206);
    match(HeaderFileParserParser::T__22);
    setState(208);
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
      setState(207);
      parameterList();
    }
    setState(210);
    match(HeaderFileParserParser::T__23);
    setState(212);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(211);
      match(HeaderFileParserParser::T__7);
      break;
    }

    }
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__10) {
      setState(214);
      match(HeaderFileParserParser::T__10);
      setState(215);
      match(HeaderFileParserParser::T__25);
    }
    setState(220);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(218);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(219);
      functionBody();
      break;
    }

    }
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(222);
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
  enterRule(_localctx, 34, HeaderFileParserParser::RuleStaticFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(HeaderFileParserParser::T__26);
    setState(226);
    type();
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__21) {
      setState(227);
      match(HeaderFileParserParser::T__21);
    }
    setState(230);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(231);
    match(HeaderFileParserParser::T__22);
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
    match(HeaderFileParserParser::T__23);
    setState(237);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(236);
      match(HeaderFileParserParser::T__7);
      break;
    }

    }
    setState(241);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
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
  enterRule(_localctx, 36, HeaderFileParserParser::RuleDestructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__24) {
      setState(246);
      match(HeaderFileParserParser::T__24);
    }
    setState(249);
    match(HeaderFileParserParser::T__27);
    setState(250);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(251);
    match(HeaderFileParserParser::T__22);
    setState(253);
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
      setState(252);
      parameterList();
    }
    setState(255);
    match(HeaderFileParserParser::T__23);
    setState(257);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(256);
      match(HeaderFileParserParser::T__7);
      break;
    }

    }
    setState(261);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(259);
      match(HeaderFileParserParser::T__3);
      break;
    }

    case 2: {
      setState(260);
      functionBody();
      break;
    }

    }
    setState(264);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__3) {
      setState(263);
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
  enterRule(_localctx, 38, HeaderFileParserParser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    parameter();
    setState(271);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__9) {
      setState(267);
      match(HeaderFileParserParser::T__9);
      setState(268);
      parameter();
      setState(273);
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

std::vector<HeaderFileParserParser::PointerOrReferenceContext *> HeaderFileParserParser::ParameterContext::pointerOrReference() {
  return getRuleContexts<HeaderFileParserParser::PointerOrReferenceContext>();
}

HeaderFileParserParser::PointerOrReferenceContext* HeaderFileParserParser::ParameterContext::pointerOrReference(size_t i) {
  return getRuleContext<HeaderFileParserParser::PointerOrReferenceContext>(i);
}

HeaderFileParserParser::DefaultValueContext* HeaderFileParserParser::ParameterContext::defaultValue() {
  return getRuleContext<HeaderFileParserParser::DefaultValueContext>(0);
}

tree::TerminalNode* HeaderFileParserParser::ParameterContext::NUMBER() {
  return getToken(HeaderFileParserParser::NUMBER, 0);
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
  enterRule(_localctx, 40, HeaderFileParserParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    type();
    setState(278);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HeaderFileParserParser::T__21

    || _la == HeaderFileParserParser::T__28) {
      setState(275);
      pointerOrReference();
      setState(280);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(281);
    match(HeaderFileParserParser::IDENTIFIER);
    setState(287);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__19) {
      setState(282);
      match(HeaderFileParserParser::T__19);
      setState(284);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HeaderFileParserParser::NUMBER) {
        setState(283);
        match(HeaderFileParserParser::NUMBER);
      }
      setState(286);
      match(HeaderFileParserParser::T__20);
    }
    setState(291);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HeaderFileParserParser::T__10) {
      setState(289);
      match(HeaderFileParserParser::T__10);
      setState(290);
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
  enterRule(_localctx, 42, HeaderFileParserParser::RuleDefaultValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
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
  enterRule(_localctx, 44, HeaderFileParserParser::RulePointerOrReference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    _la = _input->LA(1);
    if (!(_la == HeaderFileParserParser::T__21

    || _la == HeaderFileParserParser::T__28)) {
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
  enterRule(_localctx, 46, HeaderFileParserParser::RuleFunctionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(HeaderFileParserParser::T__1);
    setState(302);
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
      | (1ULL << HeaderFileParserParser::T__28)
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
      setState(300);
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
        case HeaderFileParserParser::T__28:
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
          setState(298);
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
          setState(299);
          functionBody();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(305);
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
  "headerFile", "classDeclaration", "macroModifier", "structDeclaration", 
  "classMember", "structMember", "accessSpecifier", "fieldDeclaration", 
  "type", "defineDirective", "enumDeclaration", "enumMember", "typedefDeclaration", 
  "typeSpecifier", "arrayDeclarator", "functionDeclaration", "virtualFunctionDeclaration", 
  "staticFunctionDeclaration", "destructorDeclaration", "parameterList", 
  "parameter", "defaultValue", "pointerOrReference", "functionBody"
};

std::vector<std::string> HeaderFileParserParser::_literalNames = {
  "", "':'", "'{'", "'}'", "';'", "'public'", "'protected'", "'private'", 
  "'const'", "'#define'", "','", "'='", "'char'", "'int'", "'short'", "'long'", 
  "'float'", "'double'", "'unsigned'", "'signed'", "'['", "']'", "'*'", 
  "'('", "')'", "'virtual'", "'0'", "'static'", "'~'", "'&'", "", "", "'class'", 
  "'struct'", "'enum'", "'typedef'"
};

std::vector<std::string> HeaderFileParserParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "STRING_LITERAL", "CHAR_LITERAL", 
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
    0x3, 0x30, 0x136, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x38, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3b, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x41, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x44, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x4b, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x4f, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x52, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x56, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x60, 0xa, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x7, 0x5, 0x64, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x67, 0xb, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x6b, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x75, 0xa, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x7f, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x5, 0xa, 0x88, 0xa, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x8c, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x91, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x95, 0xa, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x9b, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0x9e, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa2, 0xa, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xa7, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xad, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xb9, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0xbe, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0xc2, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xc6, 0xa, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0xc9, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xce, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd3, 
    0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd7, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0xdb, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0xdf, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0xe2, 0xa, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x5, 0x13, 0xe7, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x5, 0x13, 0xec, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xf0, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xf4, 0xa, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0xf7, 0xa, 0x13, 0x3, 0x14, 0x5, 0x14, 0xfa, 0xa, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x100, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x104, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0x108, 0xa, 0x14, 0x3, 0x14, 0x5, 0x14, 0x10b, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x110, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x113, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x117, 
    0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x11a, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x11f, 0xa, 0x16, 0x3, 0x16, 0x5, 0x16, 0x122, 
    0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x126, 0xa, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 
    0x19, 0x12f, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x132, 0xb, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x2, 0x2, 0x1a, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x2, 0x7, 0x3, 0x2, 0x7, 0x9, 
    0x4, 0x2, 0x20, 0x21, 0x26, 0x27, 0x3, 0x2, 0xe, 0x15, 0x4, 0x2, 0x18, 
    0x18, 0x1f, 0x1f, 0x3, 0x2, 0x4, 0x5, 0x2, 0x15b, 0x2, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x59, 0x3, 0x2, 0x2, 0x2, 0xa, 0x74, 0x3, 0x2, 0x2, 0x2, 0xc, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x80, 0x3, 0x2, 0x2, 0x2, 0x10, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x87, 0x3, 0x2, 0x2, 0x2, 0x14, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x92, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x20, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0x24, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x26, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x127, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x32, 0x38, 0x5, 0x4, 0x3, 
    0x2, 0x33, 0x38, 0x5, 0x8, 0x5, 0x2, 0x34, 0x38, 0x5, 0x1a, 0xe, 0x2, 
    0x35, 0x38, 0x5, 0x16, 0xc, 0x2, 0x36, 0x38, 0x5, 0x14, 0xb, 0x2, 0x37, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x37, 0x33, 0x3, 0x2, 0x2, 0x2, 0x37, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x2, 0x2, 0x3, 
    0x3d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x42, 0x7, 0x22, 0x2, 0x2, 0x3f, 
    0x41, 0x5, 0x6, 0x4, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x4a, 0x7, 0x26, 0x2, 0x2, 0x46, 0x47, 0x7, 0x3, 0x2, 
    0x2, 0x47, 0x48, 0x5, 0xe, 0x8, 0x2, 0x48, 0x49, 0x7, 0x26, 0x2, 0x2, 
    0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x50, 
    0x7, 0x4, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0xa, 0x6, 0x2, 0x4e, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 0x7, 0x5, 0x2, 0x2, 
    0x54, 0x56, 0x7, 0x6, 0x2, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x5, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 
    0x7, 0x26, 0x2, 0x2, 0x58, 0x7, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 
    0x23, 0x2, 0x2, 0x5a, 0x5f, 0x7, 0x26, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x3, 
    0x2, 0x2, 0x5c, 0x5d, 0x5, 0xe, 0x8, 0x2, 0x5d, 0x5e, 0x7, 0x26, 0x2, 
    0x2, 0x5e, 0x60, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x65, 0x7, 0x4, 0x2, 0x2, 0x62, 0x64, 0x5, 0xc, 0x7, 0x2, 0x63, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 0x7, 0x5, 0x2, 
    0x2, 0x69, 0x6b, 0x7, 0x6, 0x2, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x6d, 0x5, 0xe, 0x8, 0x2, 0x6d, 0x6e, 0x7, 0x3, 0x2, 0x2, 0x6e, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x75, 0x5, 0x22, 0x12, 0x2, 0x70, 0x75, 0x5, 
    0x24, 0x13, 0x2, 0x71, 0x75, 0x5, 0x26, 0x14, 0x2, 0x72, 0x75, 0x5, 
    0x20, 0x11, 0x2, 0x73, 0x75, 0x5, 0x10, 0x9, 0x2, 0x74, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x74, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0xb, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x77, 0x5, 0xe, 0x8, 0x2, 0x77, 0x78, 0x7, 0x3, 0x2, 0x2, 0x78, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x7f, 0x5, 0x22, 0x12, 0x2, 0x7a, 0x7f, 0x5, 
    0x24, 0x13, 0x2, 0x7b, 0x7f, 0x5, 0x26, 0x14, 0x2, 0x7c, 0x7f, 0x5, 
    0x20, 0x11, 0x2, 0x7d, 0x7f, 0x5, 0x10, 0x9, 0x2, 0x7e, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x81, 0x9, 0x2, 0x2, 0x2, 0x81, 0xf, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 
    0x5, 0x12, 0xa, 0x2, 0x83, 0x84, 0x7, 0x26, 0x2, 0x2, 0x84, 0x85, 0x7, 
    0x6, 0x2, 0x2, 0x85, 0x11, 0x3, 0x2, 0x2, 0x2, 0x86, 0x88, 0x7, 0xa, 
    0x2, 0x2, 0x87, 0x86, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x5, 0x1c, 0xf, 0x2, 
    0x8a, 0x8c, 0x7, 0x26, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 
    0x7, 0xb, 0x2, 0x2, 0x8e, 0x90, 0x7, 0x26, 0x2, 0x2, 0x8f, 0x91, 0x9, 
    0x3, 0x2, 0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x15, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x7, 0x24, 0x2, 
    0x2, 0x93, 0x95, 0x7, 0x26, 0x2, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x97, 0x7, 0x4, 0x2, 0x2, 0x97, 0x9c, 0x5, 0x18, 0xd, 0x2, 0x98, 0x99, 
    0x7, 0xc, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x18, 0xd, 0x2, 0x9a, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x7, 0x5, 0x2, 0x2, 
    0xa0, 0xa2, 0x7, 0x6, 0x2, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa6, 
    0x7, 0x26, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0xd, 0x2, 0x2, 0xa5, 0xa7, 0x7, 
    0x27, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x25, 0x2, 
    0x2, 0xa9, 0xaa, 0x5, 0x1c, 0xf, 0x2, 0xaa, 0xac, 0x7, 0x26, 0x2, 0x2, 
    0xab, 0xad, 0x5, 0x1e, 0x10, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 
    0x7, 0x6, 0x2, 0x2, 0xaf, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x9, 
    0x4, 0x2, 0x2, 0xb1, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x16, 
    0x2, 0x2, 0xb3, 0xb4, 0x7, 0x27, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x17, 0x2, 
    0x2, 0xb5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0x12, 0xa, 0x2, 
    0xb7, 0xb9, 0x7, 0x18, 0x2, 0x2, 0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
    0x7, 0x26, 0x2, 0x2, 0xbb, 0xbd, 0x7, 0x19, 0x2, 0x2, 0xbc, 0xbe, 0x5, 
    0x28, 0x15, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc1, 0x7, 0x1a, 0x2, 
    0x2, 0xc0, 0xc2, 0x7, 0xa, 0x2, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc3, 
    0xc6, 0x7, 0x6, 0x2, 0x2, 0xc4, 0xc6, 0x5, 0x30, 0x19, 0x2, 0xc5, 0xc3, 
    0x3, 0x2, 0x2, 0x2, 0xc5, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc9, 0x7, 0x6, 
    0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0x21, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x1b, 0x2, 0x2, 
    0xcb, 0xcd, 0x5, 0x12, 0xa, 0x2, 0xcc, 0xce, 0x7, 0x18, 0x2, 0x2, 0xcd, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x26, 0x2, 0x2, 0xd0, 0xd2, 0x7, 
    0x19, 0x2, 0x2, 0xd1, 0xd3, 0x5, 0x28, 0x15, 0x2, 0xd2, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd6, 0x7, 0x1a, 0x2, 0x2, 0xd5, 0xd7, 0x7, 0xa, 0x2, 0x2, 
    0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0xd, 0x2, 0x2, 0xd9, 0xdb, 
    0x7, 0x1c, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x7, 0x6, 
    0x2, 0x2, 0xdd, 0xdf, 0x5, 0x30, 0x19, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x7, 0x6, 0x2, 0x2, 0xe1, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x1d, 0x2, 0x2, 0xe4, 0xe6, 0x5, 
    0x12, 0xa, 0x2, 0xe5, 0xe7, 0x7, 0x18, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xe9, 0x7, 0x26, 0x2, 0x2, 0xe9, 0xeb, 0x7, 0x19, 0x2, 0x2, 
    0xea, 0xec, 0x5, 0x28, 0x15, 0x2, 0xeb, 0xea, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 
    0x7, 0x1a, 0x2, 0x2, 0xee, 0xf0, 0x7, 0xa, 0x2, 0x2, 0xef, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0xf4, 0x7, 0x6, 0x2, 0x2, 0xf2, 0xf4, 0x5, 0x30, 0x19, 
    0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf7, 0x7, 0x6, 0x2, 0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xf7, 0x25, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfa, 0x7, 
    0x1b, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x1e, 0x2, 
    0x2, 0xfc, 0xfd, 0x7, 0x26, 0x2, 0x2, 0xfd, 0xff, 0x7, 0x19, 0x2, 0x2, 
    0xfe, 0x100, 0x5, 0x28, 0x15, 0x2, 0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x103, 0x7, 0x1a, 0x2, 0x2, 0x102, 0x104, 0x7, 0xa, 0x2, 0x2, 0x103, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x105, 0x108, 0x7, 0x6, 0x2, 0x2, 0x106, 
    0x108, 0x5, 0x30, 0x19, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10b, 0x7, 0x6, 0x2, 0x2, 0x10a, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x111, 0x5, 0x2a, 0x16, 0x2, 0x10d, 
    0x10e, 0x7, 0xc, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x2a, 0x16, 0x2, 0x10f, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x113, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x114, 0x118, 
    0x5, 0x12, 0xa, 0x2, 0x115, 0x117, 0x5, 0x2e, 0x18, 0x2, 0x116, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x121, 
    0x7, 0x26, 0x2, 0x2, 0x11c, 0x11e, 0x7, 0x16, 0x2, 0x2, 0x11d, 0x11f, 
    0x7, 0x27, 0x2, 0x2, 0x11e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 
    0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x122, 
    0x7, 0x17, 0x2, 0x2, 0x121, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x125, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 
    0x7, 0xd, 0x2, 0x2, 0x124, 0x126, 0x5, 0x2c, 0x17, 0x2, 0x125, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x128, 0x9, 0x3, 0x2, 0x2, 0x128, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x12a, 0x9, 0x5, 0x2, 0x2, 0x12a, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x12b, 0x130, 0x7, 0x4, 0x2, 0x2, 0x12c, 0x12f, 0xa, 0x6, 0x2, 
    0x2, 0x12d, 0x12f, 0x5, 0x30, 0x19, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x133, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x134, 0x7, 0x5, 0x2, 0x2, 0x134, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x37, 0x39, 0x42, 0x4a, 0x50, 0x55, 0x5f, 0x65, 0x6a, 0x74, 0x7e, 
    0x87, 0x8b, 0x90, 0x94, 0x9c, 0xa1, 0xa6, 0xac, 0xb8, 0xbd, 0xc1, 0xc5, 
    0xc8, 0xcd, 0xd2, 0xd6, 0xda, 0xde, 0xe1, 0xe6, 0xeb, 0xef, 0xf3, 0xf6, 
    0xf9, 0xff, 0x103, 0x107, 0x10a, 0x111, 0x118, 0x11e, 0x121, 0x125, 
    0x12e, 0x130, 
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
