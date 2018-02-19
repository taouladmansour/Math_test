CC=g++

all: main 

main: add.o sub.o mult.o main.o
	$(CC) -o main add.o sub.o mult.o main.o

add.o: ../src/add.cpp
	$(CC) -o add.o -c ../src/add.cpp -W -Wall

sub.o: ../src/sub.cpp
	$(CC) -o sub.o -c ../src/sub.cpp -W -Wall

mult.o: ../src/mult.cpp ../include/add.h
	$(CC) -o mult.o -c ../src/mult.cpp -W -Wall

main.o: ../src/main.cpp ../include/add.h ../include/sub.h ../include/mult.h
	$(CC) -o main.o -c ../src/main.cpp -W -Wall

clean:
	rm -rf *.o

mrproper: clean
	rm -rf main
