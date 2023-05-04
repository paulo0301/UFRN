ORDENAR = selection_sort
PROG = $(ORDENAR)_main
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = bin\main.o bin\$(ORDENAR).o

$(PROG) : $(OBJS)
		$(CC) $(OBJS) -o bin\$(PROG)

bin\main.o	:
		$(CC) $(CPPFLAGS) -c src\main.cpp -o bin\main.o

bin\$(ORDENAR).o	: include\ordenar.h 
		$(CC) $(CPPFLAGS) -c src\$(ORDENAR).cpp -o bin\$(ORDENAR).o

clean:
		del /f "bin\*.*"