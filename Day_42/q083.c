// Count vowels and consonants in a string.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int v = 0, c = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = (char)tolower((unsigned char)s[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
            else c++;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}
