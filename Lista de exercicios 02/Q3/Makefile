PROG = main
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = bin\main.o bin\turma.o bin\aluno.o

$(PROG) : $(OBJS)
		$(CC) $(OBJS) -o bin\$(PROG)

bin\main.o	:
		$(CC) $(CPPFLAGS) -c src\main.cpp -o bin\main.o

bin\turma.o	: include\class\Turma.h 
		$(CC) $(CPPFLAGS) -c src\class\Turma.cpp -o bin\turma.o

bin\aluno.o	: include\class\Aluno.h 
		$(CC) $(CPPFLAGS) -c src\class\Aluno.cpp -o bin\aluno.o

clean:
		del /f "bin\*.*"