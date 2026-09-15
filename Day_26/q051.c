// Write a program to print right-aligned pattern: 5 / 45 / 345 / 2345 / 12345.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    for (int i = 5; i >= 1; i--) {
        for (int s = 1; s < i; s++) putchar(' ');
        for (int j = i; j <= 5; j++) printf("%d", j);
        putchar('\n');
    }
    return 0;
}
