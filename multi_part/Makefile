.PHONY: all run build clean

CC=g++ 
CFLAGS=-I ./include/
OUT_FILE=program.exe
IN_FILE?=src/*

build: $(IN_FILE)
	$(CC) $(IN_FILE) -o $(OUT_FILE) $(CFLAGS)

run: $(OUT_FILE)
	./$(OUT_FILE)

all: clean build run

clean: 
	rm -fr $(OUT_FILE) ./data/*

