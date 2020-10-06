prefix=/usr/local
CC = g++

CFLAGS = -g -Wall
SRC = StrArray.cpp main.cpp
OBJ = StrArray.o main.o
APP = main

all: $(OBJ)
	$(CC) $(CFLAGS) -o $(APP) $(OBJ)

clean:
	$(RM) $(OBJ) $(APP)

install: $(APP)
	install -m 0755 $(APP) $(prefix)/bin

uninstall: $(APP)
	$(RM) $(prefix)/bin/$(APP)
