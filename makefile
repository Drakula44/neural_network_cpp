nn.out:	main.o
	g++ -g -o nn.out main.o
main.o: ./src/main.cpp
	g++ -g -c -pthread -I/sw/include/root src/main.cpp
