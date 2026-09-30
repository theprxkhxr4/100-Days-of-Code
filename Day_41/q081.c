// Count characters in a string without using built-in length functions.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') len++;
    printf("%d\n", len);
    return 0;
}
