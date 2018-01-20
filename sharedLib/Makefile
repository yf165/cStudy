all:
	gcc yf.c -o yf.o -c -fPIC
	gcc -o libyf.so yf.o -shared
	cp libyf.so yf.h ./test
	
clean:
	rm *.o *.so