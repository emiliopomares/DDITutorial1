build/Chapter1:build/Chapter1.o
	g++ -o build/Chapter1 build/Chapter1.o

build/Chapter1.o:src/Chapter1.cpp
	g++ -c src/Chapter1.cpp -o build/Chapter1.o

clean:
	rm build/Chapter1
	rm build/Chapter1.o

run:
	build/Chapter1
