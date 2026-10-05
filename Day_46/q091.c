// Remove all vowels from a string.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = (char)tolower((unsigned char)s[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            putchar(s[i]);
        }
    }
    putchar('\n');
    return 0;
}
