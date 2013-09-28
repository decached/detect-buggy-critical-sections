CC=gcc
CFLAGS=-c -Wall

all: main
	lex main.l

main: main.y
	yacc main.y

cscheck:
	gcc lex.yy.c y.tab.c -o cscheck
