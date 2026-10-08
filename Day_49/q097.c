// Print the initials of a name.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    char *tok = strtok(s, " \t\n");
    while (tok) {
        printf("%c.", toupper((unsigned char)tok[0]));
        tok = strtok(NULL, " \t\n");
    }
    putchar('\n');
    return 0;
}
