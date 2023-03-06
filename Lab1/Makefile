pozdrav: pozdrav.o
	gcc pozdrav.o -o pozdrav
	
pozdrav.o: pozdrav.c
	gcc -c pozdrav.c
	
glavni: glavni.o fn.o
	gcc glavni.o fn.o -o glavni
	
glavni.o: glavni.c
	gcc -c glavni.c
	
fn.o: fn.c
	gcc -c fn.c
	
.c.o:
	gcc -Wall -c $<