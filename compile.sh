#!/bin/bash

COMPILER="gcc"
OUTPUT="touch-grass"

if [[ $1 == "" ]]; then
	echo "No arguments detected. Compiling src/main.c"
	SOURCE="src/main.c"
else
    if [[ -f "$1" ]]; then
        SOURCE="$1"
    else
        echo "Source file not found. Exiting..."
        exit 1;
    fi
fi

COMPILER_FLAGS="-o $OUTPUT"

$COMPILER $COMPILER_FLAGS $SOURCE

echo "Done compiling."
exit 0;
