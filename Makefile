all: main.cc
	g++ -g -Wall -o count main.cc

clean:
	rm count
