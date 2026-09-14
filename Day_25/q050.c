// Write a program to print an inverted right triangle star pattern.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < i; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
