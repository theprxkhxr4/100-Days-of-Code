// Write a program to swap the first and last digit of a number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[64];
    scanf("%63s", s);
    size_t len = strlen(s);
    if (len > 1) {
        char tmp = s[0];
        s[0] = s[len - 1];
        s[len - 1] = tmp;
    }
    printf("%s\n", s);
    return 0;
}
