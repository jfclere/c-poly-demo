main: module1/module1.c module2/module2.c common/common.c
	cc -c -Iinclude -Icommon module1/module1.c -o module1.o
	cc -c -Iinclude -Icommon module2/module2.c -o module2.o
	cc -c -Iinclude main.c
	cc module1.o module2.o main.o -o main

clean:
	- rm *.o main
