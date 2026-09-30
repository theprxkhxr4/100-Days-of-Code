// Print each character of a string on a new line.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        printf("%c\n", s[i]);
    }
    return 0;
}
