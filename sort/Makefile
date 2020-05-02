run_objects = run.o mergesort.o quicksort.o insertsort.o \
			  findkth.o

run : $(run_objects)
	g++ --std=c++11 -o run $(run_objects) -I./include -I../

run.o : run.cpp
	g++ --std=c++11 -c run.cpp -I./include -I../

mergesort.o : mergesort.cpp
	g++ -c mergesort.cpp -I./include -I../

quicksort.o : quicksort.cpp
	g++ -c quicksort.cpp -I./include -I../

insertsort.o : insertsort.cpp
	g++ -c insertsort.cpp -I./include -I../

findkth.o : findkth.cpp
	g++ -c findkth.cpp -I./include -I../

.PHONY : clean
clean : 
	-rm run *.o
