nn.out:	main.o node.o
	g++ -g -o nn.out main.o node.o 
main.o: ./src/main.cpp 
	g++ -g -c -pthread -I/sw/include/root src/main.cpp
node.o: .src/node.cpp ./headers/node.h
	g++ -g -c -pthread -I/sw/include/root src/node.cpp
