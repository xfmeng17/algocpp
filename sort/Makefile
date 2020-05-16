sort_objects = sort.o mergesort.o quicksort.o insertsort.o \
			  findkth.o

sort : $(sort_objects)
	g++ --std=c++11 -o sort $(sort_objects) -I../

sort.o : sort.cpp
	g++ --std=c++11 -c sort.cpp -I../

mergesort.o : mergesort.cpp
	g++ -c mergesort.cpp -I../

quicksort.o : quicksort.cpp
	g++ -c quicksort.cpp -I../

insertsort.o : insertsort.cpp
	g++ -c insertsort.cpp -I../

findkth.o : findkth.cpp
	g++ -c findkth.cpp -I../

.PHONY : clean
clean : 
	-rm sort *.o
