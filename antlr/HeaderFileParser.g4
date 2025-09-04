grammar HeaderFileParser;

headerFile: (
		classDeclaration
		| structDeclaration
		| typedefDeclaration
		| enumDeclaration
		| defineDirective
	)* EOF;

classDeclaration:
	CLASS IDENTIFIER (':' accessSpecifier IDENTIFIER)? '{' classMember* '}' ';'?;
structDeclaration:
	STRUCT IDENTIFIER (':' accessSpecifier IDENTIFIER)? '{' structMember* '}' ';'?;
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
defineDirective:
	'#define' IDENTIFIER (
		NUMBER
		| STRING_LITERAL
		| CHAR_LITERAL
		| IDENTIFIER
	)?;

enumDeclaration:
	ENUM IDENTIFIER? '{' enumMember (',' enumMember)* '}' ';'?;
enumMember: IDENTIFIER ('=' NUMBER)?;
//typedef char TThostFtdcInvestorIDType[13];
typedefDeclaration:
	TYPEDEF typeSpecifier IDENTIFIER arrayDeclarator? ';';

typeSpecifier:
	'char'
	| 'int'
	| 'short'
	| 'long'
	| 'float'
	| 'double'
	| 'unsigned'
	| 'signed';

arrayDeclarator: '[' NUMBER ']';

STRING_LITERAL: '"' ( EscapeSequence | ~["] )* '"';

CHAR_LITERAL
    : '\'' ( EscapeSequence | ~('\'' | '\\') )+ '\''
    ;


fragment EscapeSequence:
	'\\' [btnvrf"'\\] // 常见的转义
	| '\\' [0-7] [0-7]? [0-7]? // 八进制：1到3位数字
	| '\\x' [0-9a-fA-F]+ ; // 十六进制转义
CLASS: 'class';
STRUCT: 'struct';
ENUM: 'enum';
TYPEDEF: 'typedef';
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

NUMBER: [0-9]+;

//#define THOST_FTDC_EXP_Normal '0' IFENDIFDECLARATION: '#if' .*? '#endif' -> skip; #pragma once
PRAGMADECLARATION: '#pragma' .*? '\n' -> skip;
//#include "ThostFtdcUserApiStruct.h"
INCLUDEDECLARATION: '#include' .*? '\n' -> skip;
IFDECLARATION: '#if' .*? '\n' -> skip;
ENDIFDECLARATION: '#endif' .*? '\n' -> skip;
COMMENT: '//' .*? '\n' -> skip;
WHITESPACE: [ \t\r\n]+ -> skip;