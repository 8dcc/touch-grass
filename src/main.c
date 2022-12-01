#include <stdio.h>     // For printing
#include <string.h>    // For checking the arguments
#include <stdlib.h>    // For rand()
#include <time.h>      // For the srand() seed

#include "colors.h"
#include "strings.h"

#define length(arr) (sizeof(arr) / sizeof(arr[0]))
#define max(a, b)   (a > b ? a : b)

static inline void print_simple(const int idx) {
    printf("%s\n", str_arr[idx]);
}

static inline void print_color(const int idx) {
    printf("%s\n", str_arr_color[idx]);
}

int main(int argc, char** argv) {
    // Check if there are arguments and -c is the first one
    const int using_color = (argc > 1 && strcmp("-c", argv[1]) == 0);

    const int str_ammount = max(length(str_arr), length(str_arr_color));

    // Get a random id for the string.
    // TODO: Seed changes every sec, make it even more random.
    srand(time(NULL));
    const int random_id = rand() % str_ammount;

    if (using_color)
        print_color(random_id);
    else
        print_simple(random_id);

    return 0;
}

