SRC=main.cpp
TARGET=./bin/a.out
all:main.cpp libcard.a libpoker.a
	g++ ${SRC} -I./include -L./lib -lcard -lpoker -o ${TARGET}
	${TARGET}
libpoker.a:poker.o libcard.a
	ar rcs ./lib/libpoker.a ./tmp/poker.o
poker.o:./src/Poker.cpp
	g++ ./src/Poker.cpp -c -o ./tmp/poker.o -I./include -L./lib -lcard
libcard.a:card.o
	ar rcs ./lib/libcard.a ./tmp/card.o
card.o:./src/Card.cpp
	g++ ./src/Card.cpp -c -o ./tmp/card.o -I./include
clear:
	rm -f ./bin/*
	rm -f ./tmp/*
	rm -f ./lib/*
