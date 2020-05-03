all:
	gcc hello.c

preprocess:
	gcc -E hello.c -o 1_hello.p

assembly:
	gcc -S hello.c -o 2_hello.s

compile:
	gcc -c hello.c -o 3_hello.o

see-hex:
	hexdump -v 3_hello.o

link:
	gcc hello.c -v -o 4_hello.out

clean:
	rm -f 1_hello.p 2_hello.s 3_hello.o 4_hello.out a.out hello
