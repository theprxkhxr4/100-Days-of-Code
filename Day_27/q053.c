// Write a program to print a diamond pattern of odd star counts (1, 3, 5, 7, 9, 7, 5, 3, 1).
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int rows[] = {1, 3, 5, 7, 9, 7, 5, 3, 1};
    for (int r = 0; r < 9; r++) {
        for (int j = 0; j < rows[r]; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
