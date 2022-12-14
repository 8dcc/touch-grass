
CC=gcc
CFLAGS=-Wall
BIN=touch-grass

.PHONY: clean all install uninstall run

all: $(BIN)

$(BIN): src/*.c src/*.h
	$(CC) $(CFLAGS) -o $@ src/main.c

run: $(BIN)
	./$<

install: $(BIN)
	install --mode=0755 $< /usr/local/bin/

uninstall: $(BIN)
	rm -f /usr/local/bin/$<

clean:
	rm -f $(BIN)
