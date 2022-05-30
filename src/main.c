#include <stdio.h>      // For printing
#include <string.h>     // For checking the arguments
#include <stdlib.h>     // For rand()
#include <time.h>       // For the srand() seed

#define STR_NUM 4       // Number of strings for the arrays

#define COL_0 "\x1b[0m"       // 0 - Reset
#define COL_1 "\x1b[31m"      // 1 - Red
#define COL_2 "\x1b[32m"      // 2 - Green
#define COL_3 "\x1b[33m"      // 3 - Yellow
#define COL_4 "\x1b[34m"      // 4 - Blue
#define COL_5 "\x1b[35m"      // 5 - Magenta
#define COL_6 "\x1b[36m"      // 6 - Cyan

void print_simple(const int str_id);
void print_color(const int str_id);

int main(int argc, char** argv) {
    // Check if there are arguments and -c is the first one, then save that in const
    const int using_color = (argc > 1 && strcmp("-c", argv[1]) == 0) ? 1 : 0;

    srand(time(0));     // Seed changes every sec
    const int random_id = rand() % STR_NUM;

    if (using_color) print_color(random_id);
    else print_simple(random_id);

    return 0;
}

void print_simple(const int str_id) {
    const char* str_arr[STR_NUM] = {
        "Remember to touch some grass.",
        "Did you have a shower today?",
        "You should go outside.",
        "You need the sun light."
    };

    printf(str_arr[str_id]);
}

void print_color(const int str_id) {
    const char* str_arr[STR_NUM] = {
        "Remember to touch some " COL_2 "grass" COL_0 ".",
        "Did you have a " COL_6 "shower" COL_0 " today?",
        "You should go " COL_3 "outside" COL_0 ".",
        "You need the " COL_3 "sun" COL_0 " light."
    };

    printf(str_arr[str_id]);
}
