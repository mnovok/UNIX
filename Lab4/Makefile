CC = gcc
CFLAGS = -Wall

TARGETS = zad2 zad3 zad4 zad1

default: zad1

all: $(TARGETS)

zad1: zad1.o
	$(CC) $(CFLAGS) zad1.o -o zad1
	
zad1.o: zad1.c
	$(CC) $(CFLAGS) -c zad1.c
	
zad2: zad2.o
	$(CC) $(CFLAGS) zad2.o -o zad2
        
zad2.o: zad2.c
	$(CC) $(CFLAGS) -c zad2.c
        
      
zad3: zad3.o
	 $(CC) $(CFLAGS) zad3.o -o zad3
              
zad3.o: zad3.c
	 $(CC) $(CFLAGS) -c zad3.c
	 

zad4: zad4.o
	$(CC) $(CFLAGS) zad4.o -o zad4 	 
        
clean:
	rm -f *.o *~ a.out $(TARGETS)
	
.c.o:
	$(CC) $(CFLAGS) -c $<        
                              
                