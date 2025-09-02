#include "HeaderFileParserImpl.h"
#include "HeaderFileParserLexer.h"
#include "HeaderFileParserParser.h"
#include "antlr4-runtime.h"

#include <fstream>
#include <iostream>

using namespace antlr4;

class SyntaxErrorListener : public BaseErrorListener {
public:
  struct SyntaxError {
    size_t line;
    size_t charPosition;
    std::string message;
    std::string offendingSymbol;
  };

  std::vector<SyntaxError> errors;

  void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line,
                   size_t charPositionInLine, const std::string &msg,
                   std::exception_ptr e) override {
    errors.push_back({line, charPositionInLine, msg,
                      offendingSymbol ? offendingSymbol->getText() : ""});

    std::cerr << "Syntax error at line " << line << ":" << charPositionInLine
              << " - " << msg << std::endl;
    if (offendingSymbol && !offendingSymbol->getText().empty()) {
      std::cerr << "Offending symbol: '" << offendingSymbol->getText() << "'"
                << std::endl;
    }
  }
};

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <header_file>" << std::endl;
    return 1;
  }

  std::ifstream stream(argv[1], std::ios::binary);
  if (!stream.is_open()) {
    std::cerr << "Cannot open file: " << argv[1] << std::endl;
    return 1;
  }
  SyntaxErrorListener errorListener;
  std::string buffer((std::istreambuf_iterator<char>(stream)),
                     std::istreambuf_iterator<char>());
  antlr4::ANTLRInputStream input(buffer);
  HeaderFileParserLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  HeaderFileParserParser parser(&tokens);

  parser.removeErrorListeners();
  lexer.removeErrorListeners();

  parser.addErrorListener(&errorListener);
  lexer.addErrorListener(&errorListener);

  HeaderFileParserImpl visitor;
  visitor.visitHeaderFile(parser.headerFile());

  return 0;
}
