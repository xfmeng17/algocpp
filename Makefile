sort_objects = sort.o mergesort.o quicksort.o

sort : $(sort_objects)
	gcc -o sort $(sort_objects) -I./include

sort.o : src/sort/sort.c
	gcc -c src/sort/sort.c -I./include

mergesort.o : src/sort/mergesort.c
	gcc -c src/sort/mergesort.c -I./include 

quicksort.o : src/sort/quicksort.c
	gcc -c src/sort/quicksort.c -I./include

.PHONY : clean
clean : 
	-rm sort *.o
