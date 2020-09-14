all: newd

newd: driver.o
	g++ -Wall -std=c++17 -o driver driver.o

driver.o: driver.cpp
	g++ -Wall -std=c++17 -c driver.cpp

clean:
	rm *.o