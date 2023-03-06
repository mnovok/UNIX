CC = gcc
CFLAGS = -Wall

TARGETS = primjer1 primjer2 primjer2prerada  primjer3

default: primjer1

all: $(TARGETS)

primjer1: primjer1.o
	$(CC) $(CFLAGS) primjer1.o -o primjer1
	
primjer1.o: primjer1.c
	$(CC) $(CFLAGS) -c primjer1.c
	
primjer2: primjer2.o
	$(CC) $(CFLAGS) primjer2.o -o primjer2
	
primjer2.o: primjer2.c
	$(CC) $(CFLAGS) -c primjer2.c	

primjer2prerada: primjer2_prerada.o
	$(CC) $(CFLAGS) primjer2_prerada.o -o primjer2_prerada
	
primjer2prereada.o: primjer2_prerada.c
	$(CC) $(CFLAGS) -c primjer2_prerada.c
	
primjer3: primjer3.o
	$(CC) $(CFLAGS) primjer3.o -o primjer3
	
primjer3.o: primjer3.c
	$(CC) $(CFLAGS) -c primjer3.c
	
clean:
	rm -f *.o *~ a.out $(TARGETS)	

.c.o:
	$(CC) $(CFLAGS) -c $< 