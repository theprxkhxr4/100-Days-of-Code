// Replace spaces with hyphens in a string.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') s[i] = '-';
    }
    printf("%s", s);
    return 0;
}
