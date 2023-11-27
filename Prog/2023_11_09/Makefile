sort : bubble_sort.o insertion_sort.o merge_sort.o quick_sort.o radix_sort.o selection_sort.o utils.o sort.o

bubble_sort.o : 
	gcc -Wall -Wextra -std=c11 -lm -c bubble_sort.c

insertion_sort.o : 
	gcc -Wall -Wextra -std=c11 -lm -c insertion_sort.c

merge_sort.o : 
	gcc -Wall -Wextra -std=c11 -lm -c merge_sort.c

quick_sort.o : 
	gcc -Wall -Wextra -std=c11 -lm -c quick_sort.c

radix_sort.o : 
	gcc -Wall -Wextra -std=c11 -lm -c radix_sort.c

selection_sort.o : 
	gcc -Wall -Wextra -std=c11 -lm -c selection_sort.c

utils.o : 
	gcc -Wall -Wextra -std=c11 -lm -c utils.c

sort.o : 
	gcc -Wall -Wextra -std=c11 -lm -c sort.c

clean :
	rm -f *.o sort

rebuild : clean sort