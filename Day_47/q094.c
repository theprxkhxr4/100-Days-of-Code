// Find the longest word in a sentence.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000], best[1000] = "";
    fgets(s, sizeof(s), stdin);
    char *tok = strtok(s, " \t\n");
    while (tok) {
        if (strlen(tok) > strlen(best)) strcpy(best, tok);
        tok = strtok(NULL, " \t\n");
    }
    printf("%s\n", best);
    return 0;
}
