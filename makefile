all:maman11q2

reverse:maman11q2.c
	gcc maman11q2.c -Wall -ansi -pedantic -o maman11q2
	
clean:
	rm -f *.o maman11q2
