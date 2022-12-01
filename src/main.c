#include <stdio.h>
#include <string.h>    // For strcmp()
#include <stdlib.h>    // For rand(), srand(), exit()
#include <time.h>      // For time()

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

static inline void usage(const char* argv0) {
    printf("Usage:\n"
           "    %s       - Run the program with no color.\n"
           "    %s -c    - Run the program with color enabled.\n"
           "    %s -h    - Show this help.\n",
           argv0, argv0, argv0);

    exit(0);
}

int main(int argc, char** argv) {
    int arg_color = 0;
    if (argc > 1) {
        if (strcmp("-c", argv[1]) == 0)
            arg_color = 1;
        else if (strcmp("-h", argv[1]) == 0 || strcmp("--help", argv[1]) == 0)
            usage(argv[0]);
    }

    const int str_ammount = max(length(str_arr), length(str_arr_color));

    // Get a random id for the string.
    // TODO: Seed changes every sec, make it even more random.
    srand(time(NULL));
    const int random_id = rand() % str_ammount;

    if (arg_color)
        print_color(random_id);
    else
        print_simple(random_id);

    return 0;
}

