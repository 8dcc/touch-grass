
CC=gcc
CFLAGS=-Wall
BIN=touch-grass

all: $(BIN).out

$(BIN).out: src/*.c src/*.h
	$(CC) $(CFLAGS) -o $@ src/main.c

run: $(BIN).out
	./$<

clean:
	rm $(BIN).out
