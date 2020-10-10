main_objects = main.o mergesort.o quicksort.o insertsort.o \
			  findkth.o

main : $(main_objects)
	g++ --std=c++11 -o main $(main_objects) -I../

main.o : main.cc
	g++ --std=c++11 -c main.cc -I../

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
	-rm main *.o
