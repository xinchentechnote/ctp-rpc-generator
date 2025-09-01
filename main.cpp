#include "HeaderFileParserImpl.h"
#include "HeaderFileParserLexer.h"
#include "HeaderFileParserParser.h"
#include "antlr4-runtime.h"

#include <fstream>
#include <iostream>

using namespace antlr4;

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <header_file>" << std::endl;
    return 1;
  }

  std::ifstream stream(argv[1]);
  if (!stream.is_open()) {
    std::cerr << "Cannot open file: " << argv[1] << std::endl;
    return 1;
  }

  ANTLRInputStream input(stream);
  HeaderFileParserLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  HeaderFileParserParser parser(&tokens);

  HeaderFileParserImpl visitor;
  visitor.visitHeaderFile(parser.headerFile());

  return 0;
}
