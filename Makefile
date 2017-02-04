simulator.out: city.o main.o plane.o airport.o
	g++ -Wall -g -ansi -o simulator.out city.o main.o plane.o airport.o

city.o: city.cpp city.h airport.h
	g++ -Wall -g -ansi -c city.cpp

main.o: main.cpp list.h list.cpp airport.h
	g++ -Wall -g -ansi -c main.cpp

plane.o: plane.cpp plane.h
	g++ -Wall -g -ansi -c plane.cpp

airport.o: airport.cpp airport.h city.h list.h list.cpp
	g++ -Wall -g -ansi -c airport.cpp

clean:
	rm -f simulator.out city.o main.o airport.o plane.o 
