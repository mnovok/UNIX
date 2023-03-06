CC = gcc
CFLAGS = -Wall

TARGETS = zad1

default: zad1

all: $(TARGETS)

zad1: zad1.o
	$(CC) $(CFLAGS) zad1.o -o zad1
	
zad1.o: zad1.c
	$(CC) $(CFLAGS) -c zad1.c
	
clean:
	rm -f *.o *~ a.out $(TARGETS)
	
.c.o:
	$(CC) $(CFLAGS) -c $<        
                              
                