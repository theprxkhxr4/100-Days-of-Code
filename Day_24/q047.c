// Write a program to print a left-aligned right triangle star pattern.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
