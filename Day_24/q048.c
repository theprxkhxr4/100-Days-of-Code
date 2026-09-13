// Write a program to print the number triangle pattern: 1 / 12 / 123 / 1234 / 12345.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("%d", j);
        putchar('\n');
    }
    return 0;
}
