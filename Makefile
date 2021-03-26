main: main.o funcs.o unindent.o indent.o
	g++ -o main main.o funcs.o 

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h



funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h unindent.h indent.o

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o funcs.o tests.o
