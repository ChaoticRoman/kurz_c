all:
	g++ hello.cpp

preprocess:
	g++ -E hello.cpp -o 1_hello.p

assembly:
	g++ -S hello.cpp -o 2_hello.s

compile:
	g++ -c hello.cpp -o 3_hello.o

see-hex:
	hexdump -v 3_hello.o

link:
	g++ hello.cpp -v -o 4_hello.out

clean:
	rm -f 1_hello.p 2_hello.s 3_hello.o 4_hello.out a.out hello
