fractions : fractions.o main.o
	gcc main.o fractions.o -o fractions.out -lm

fractions.o : 
	gcc -Wall -Wextra -std=c11 -lm -c fractions.c

main.o : 
	gcc -Wall -Wextra -std=c11 -lm -c main.c

clean :
	rm -f *.o fractions.out

rebuild: clean fractions
