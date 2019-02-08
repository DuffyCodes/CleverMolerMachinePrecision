# build an executable named myprog from myprog.c
all: main.cpp
	g++ -g -Wall -o precision main.cpp

clean:
	$(RM) precision
