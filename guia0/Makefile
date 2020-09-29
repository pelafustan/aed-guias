prefix=/usr/local
CC = g++

CFLAGS = -g -Wall
SRC = Coordinate.cpp Atom.cpp Aminoacid.cpp Chain.cpp Protein.cpp main.cpp
OBJ = Coordinate.o Atom.o Aminoacid.o Chain.o Protein.o main.o
APP = main

all: $(OBJ)
	$(CC) $(CFLAGS) -o $(APP) $(OBJ)

clean:
	$(RM) $(OBJ) $(APP)

install: $(APP)
	install -m 0755 $(APP) $(prefix)/bin

uninstall: $(APP)
	$(RM) $(prefix)/bin/$(APP)
