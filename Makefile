all:
	gcc *.c

headers:
	gcc *.h; rm *.gch

clean:
	rm -f *.out; rm -f *.o; rm -f *.gch