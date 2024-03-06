.PHONY: all run build

CC=g++ 
CFLAGS=-I ./
OUT_FILE=run.exe
IN_FILE?=main.cpp func.cpp

build: $(IN_FILE)
	$(CC) $(IN_FILE) -o $(OUT_FILE) $(CFLAGS)

run: $(OUT_FILE)
	./$(OUT_FILE)

all: build run

