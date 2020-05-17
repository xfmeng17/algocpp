test_objects = test.o mergesort.o quicksort.o insertsort.o \
			  findkth.o

test : $(test_objects)
	g++ --std=c++11 -o test $(test_objects) -I../

test.o : test.cc
	g++ --std=c++11 -c test.cc -I../

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
	-rm test *.o
