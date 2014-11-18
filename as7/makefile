#
# PROGRAM:	Lab Training Exercise
# PROGRAMMER: your name
#

CC = g++
CCFLAGS = -Wall

labtrain: assign7.o
	$(CC) $(CCFLAGS) -o assign7 assign.o

labtrain.o: assign7.cpp 
	$(CC) $(CCFLAGS) -c assign7.cpp quicksort.h sort.h

clean:
	- rm *.o assign7