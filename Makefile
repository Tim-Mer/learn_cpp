.PHONY: all run build

CC=g++ 
CFLAGS=-I.
OUT_FILE=run.exe
IN_FILE?=hello.cpp

build: $(IN_FILE)
	$(CC) $(IN_FILE) -o $(OUT_FILE) $(CFLAGS)

run: $(OUT_FILE)
	./$(OUT_FILE)

all: build run

