grammar HeaderFileParser;

headerFile: classOrStructDeclaration* EOF;

classOrStructDeclaration:
	classDeclaration
	| structDeclaration
	| macroConstantDeclaration;

classDeclaration:
	'class' IDENTIFIER (':' accessSpecifier IDENTIFIER)? '{' classMember* '}' ';'?;
structDeclaration:
	'struct' IDENTIFIER (':' accessSpecifier IDENTIFIER)? '{' structMember* '}' ';'?;
classMember:
	accessSpecifier ':'
	| functionDeclaration
	| fieldDeclaration;
structMember:
	accessSpecifier ':'
	| functionDeclaration
	| fieldDeclaration;
accessSpecifier: 'public' | 'protected' | 'private';
functionDeclaration:
	type IDENTIFIER '(' parameterList? ')' ('const')? (';')?;
fieldDeclaration: type IDENTIFIER ';';
parameterList: parameter (',' parameter)*;
parameter: type IDENTIFIER;
type: IDENTIFIER;
macroConstantDeclaration: '#define' IDENTIFIER ('\'' . '\'')?;

IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;
//#define THOST_FTDC_EXP_Normal '0'
IFENDIFDECLARATION: '#if' .*? '#endif' -> skip;
//#pragma once
PRAGMADECLARATION: '#pragma' .*? '\n' -> skip;
//#include "ThostFtdcUserApiStruct.h"
INCLUDEDECLARATION: '#include' .*? '\n' -> skip;
IFDECLARATION: '#if' .*? '\n' -> skip;
ENDIFDECLARATION: '#endif' .*? '\n' -> skip;
COMMENT: '//' .*? '\n' -> skip;
WHITESPACE: [ \t\r\n]+ -> skip;