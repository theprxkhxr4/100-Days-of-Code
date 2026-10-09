// Print all sub-strings of a string.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200];
    scanf("%199s", s);
    int n = (int)strlen(s), first = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (!first) putchar(',');
            first = 0;
            for (int k = i; k <= j; k++) putchar(s[k]);
        }
    }
    putchar('\n');
    return 0;
}
