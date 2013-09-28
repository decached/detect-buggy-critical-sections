CC=gcc
CFLAGS=-c -Wall

all:
        gcc -Wall util.c -o util
#    lex main.l

#main: main.y
 #   yacc main.y

#cscheck:
 #   gcc lex.yy.c y.tab.c -o cscheck
