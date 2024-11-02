SRC=main.cpp
TARGET=./bin/a.out
all:main.cpp libcard.a
	g++ ${SRC} -I./include -L./lib -lcard -o ${TARGET}
	${TARGET}
libcard.a:card.o
	ar -rcs ./lib/libcard.a ./tmp/card.o
card.o:./src/Card.cpp
	g++ ./src/Card.cpp -c -o ./tmp/card.o -I./include
clear:
	rm -f ./bin/*
	rm -f ./tmp/*
	rm -f ./lib/*
