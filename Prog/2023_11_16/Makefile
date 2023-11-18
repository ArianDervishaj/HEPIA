demineur : demineur.o
	gcc demineur.o -o demineur.out -lm

demineur.o : 
	gcc -Wall -Wextra -std=c11 -lm -c demineur.c

clean :
	rm -f *.o demineur.out

rebuild: clean demineur
