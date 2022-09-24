#include <stdio.h>      // For printing
#include <string.h>     // For checking the arguments
#include <stdlib.h>     // For rand()
#include <time.h>       // For the srand() seed

#include "colors.h"

#define STR_NUM 4       // Number of strings for the arrays

static void print_simple(const int str_id);
static void print_color(const int str_id);

int main(int argc, char** argv) {
    // Check if there are arguments and -c is the first one, then save that in const
    const int using_color = (argc > 1 && strcmp("-c", argv[1]) == 0) ? 1 : 0;

    // Get a random id for the string.
    // TODO: Seed changes every sec
    srand(time(NULL));
    const int random_id = rand() % STR_NUM;

    if (using_color) print_color(random_id);
    else             print_simple(random_id);

    return 0;
}

static void print_simple(const int str_id) {
    static const char* str_arr[STR_NUM] = {
        "Remember to touch some grass.",
        "Did you have a shower today?",
        "You should go outside.",
        "You need the sun light."
    };

    printf(str_arr[str_id]);
}

static void print_color(const int str_id) {
    static const char* str_arr[STR_NUM] = {
        "Remember to touch some " COL_2 "grass" COL_0 ".",
        "Did you have a " COL_6 "shower" COL_0 " today?",
        "You should go " COL_3 "outside" COL_0 ".",
        "You need the " COL_3 "sun" COL_0 " light."
    };

    printf(str_arr[str_id]);
}
