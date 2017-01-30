__start__: main
		./main
main: main2.o
	g++ -o main2.o
main2.o: main2.cpp
	g++ -g -std=c++11 -c main2.cpp