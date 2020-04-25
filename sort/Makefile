sort_objects = sort.o mergesort.o quicksort.o

sort : $(sort_objects)
	gcc -o sort $(sort_objects) -I./include

sort.o : sort.c
	gcc -c sort.c -I./include

mergesort.o : mergesort.c
	gcc -c mergesort.c -I./include 

quicksort.o : quicksort.c
	gcc -c quicksort.c -I./include

.PHONY : clean
clean : 
	-rm sort *.o
