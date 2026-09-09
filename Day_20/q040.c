// Write a program to find the 1's complement of a binary number and print it.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char s[128];
    scanf("%127s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        putchar(s[i] == '0' ? '1' : '0');
    }
    putchar('\n');
    return 0;
}
