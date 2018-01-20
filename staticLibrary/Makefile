all:
	gcc yf.c -o yf.o -c
	ar rc libyf.a yf.o
	cp libyf.a yf.h ./test
	
clean:
	rm *.o *.a