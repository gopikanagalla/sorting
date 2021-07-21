all:main
	echo "bulid done"
main:main.o bubblesort.o insertionsort.o mergesort.o quicksort.o selectionsort.o
	gcc main.o bubblesort.o insertionsort.o mergesort.o quicksort.o selectionsort.o -o main
main.o:main.c
	gcc -c main.c
bubblesort.o:bubblesort.c
	gcc -c bubblesort.c
insertionsort.o:insertionsort.c
	gcc -c insertionsort.c
mergesort.o:mergesort.c
	gcc -c mergesort.c
quicksort.o:quicksort.c
	gcc -c quicksort.c
selectionsort.o:selectionsort.c
	gcc -c selectionsort.c
clean:
	rm *.o main


