// Print initials of a name with the surname displayed in full.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000], *words[100];
    int n = 0;
    fgets(s, sizeof(s), stdin);
    char *tok = strtok(s, " \t\n");
    while (tok && n < 100) {
        words[n++] = tok;
        tok = strtok(NULL, " \t\n");
    }
    for (int i = 0; i < n - 1; i++) {
        printf("%c.", toupper((unsigned char)words[i][0]));
    }
    if (n > 0) printf(" %s\n", words[n - 1]);
    return 0;
}
