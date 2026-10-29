// Convert a string to title/sentence case (capitalize first letter of each word).
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int new_word = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
            new_word = 1;
        } else if (new_word) {
            s[i] = (char)toupper((unsigned char)s[i]);
            new_word = 0;
        }
    }
    printf("%s", s);
    return 0;
}
