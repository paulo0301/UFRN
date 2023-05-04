PROG = bseq_main
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
BUSCA = bseq
OBJS = bin\main.o bin\$(BUSCA).o

$(PROG) : $(OBJS)
		$(CC) $(OBJS) -o bin\$(PROG)

bin\main.o	:
		$(CC) $(CPPFLAGS) -c src\main.cpp -o bin\main.o

bin\$(BUSCA).o	: include\busca.h 
		$(CC) $(CPPFLAGS) -c src\$(BUSCA).cpp -o bin\$(BUSCA).o

clean:
		del /f "bin\*.*"