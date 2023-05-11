PROG = main
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = bin\main.o bin\funcionario.o

$(PROG) : $(OBJS)
		$(CC) $(OBJS) -o bin\$(PROG)

bin\main.o :
		$(CC) $(CPPFLAGS) -c src\main.cpp -o bin\main.o

bin\funcionario.o	: include\Funcionario.h 
		$(CC) $(CPPFLAGS) -c src\Funcionario.cpp -o bin\funcionario.o

clean:
		del /f "bin\*.*"