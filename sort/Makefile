sort_objects = sort.o mergesort.o quicksort.o

sort : $(sort_objects)
	g++ -o sort $(sort_objects) -I./include

sort.o : sort.cpp
	g++ -c sort.cpp -I./include

mergesort.o : mergesort.cpp
	g++ -c mergesort.cpp -I./include 

quicksort.o : quicksort.cpp
	g++ -c quicksort.cpp -I./include

.PHONY : clean
clean : 
	-rm sort *.o
