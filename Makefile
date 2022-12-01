
CC=gcc
CFLAGS=-Wall
BIN=touch-grass.out

all: $(BIN)

$(BIN): src/*.c src/*.h
	$(CC) $(CFLAGS) -o $@ src/main.c

run: $(BIN)
	./$<

clean:
	rm -f $(BIN)
