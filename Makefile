all:
	gcc main.c memory.c debug.c chunk.c

headers:
	gcc *.h

clean:
	rm -f *.out; rm -f *.o; rm -f *.gch