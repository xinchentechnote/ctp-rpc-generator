grammar HeaderFileParser;

headerFile: classOrStructDeclaration* EOF;

classOrStructDeclaration: classDeclaration | structDeclaration;

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

IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

COMMENT: '//' .*? '\n' -> skip;

WHITESPACE : [ \t\r\n]+ -> skip;
