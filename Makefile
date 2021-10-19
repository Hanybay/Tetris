
CC=gcc

option1= -W -Wall -pedantic
option2=`pkg-config --cflags MLV` `pkg-config --libs-only-other --libs-only-L MLV`
option3=`pkg-config --libs-only-l MLV`


main: structure.o main.o
	$(CC) $(option2) structure.o main.o $(option3) -o main

main.o: main.c
	$(CC) $(option1) -c main.c 


structure.o: structure.h	
	$(CC) $(option1) -c structure.c

clean:
	rm -rf *.o *~ main

