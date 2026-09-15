// Write a program to print vertical spaced star groups pattern.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int groups[] = {1, 3, 5, 3, 1};
    for (int g = 0; g < 5; g++) {
        for (int i = 0; i < groups[g]; i++) printf("*\n");
        if (g < 4) putchar('\n');
    }
    return 0;
}
