sort_objects = sort.o mergesort.o quicksort.o insertsort.o \
			  findkth.o

sort : $(sort_objects)
	g++ --std=c++11 -o sort $(sort_objects) -I../

sort.o : sort.cc
	g++ --std=c++11 -c sort.cc -I../

mergesort.o : mergesort.cc
	g++ -c mergesort.cc -I../

quicksort.o : quicksort.cc
	g++ -c quicksort.cc -I../

insertsort.o : insertsort.cc
	g++ -c insertsort.cc -I../

findkth.o : findkth.cc
	g++ -c findkth.cc -I../

.PHONY : clean
clean : 
	-rm sort *.o
