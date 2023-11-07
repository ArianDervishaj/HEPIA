mystring : mystring.o string_manip.o
	gcc string_manip.o mystring.o -o string_manip 

mystring.o : 
	gcc -Wall -Wextra -std=c11 -c mystring.c

string_manip.o : 
	gcc -Wall -Wextra -std=c11 -c string_manip.c

clean :
	rm -f *.o string_manip

rebuild: clean mystring
