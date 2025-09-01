ifeq ($(OS),Windows_NT)
    # Windows
    ANTLR_JAR := $(subst \,/,${USERPROFILE})/software/antlr-4.8-complete.jar
else
    # Unix/Linux/Mac
    ANTLR_JAR := ${HOME}/software/antlr-4.8-complete.jar
endif

gen:
	java -jar "$(ANTLR_JAR)" -Dlanguage=Cpp antlr/HeaderFileParser.g4 -no-listener -visitor -o generated 