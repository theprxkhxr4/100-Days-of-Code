// Length of the longest substring without repeating characters.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    scanf("%999s", s);
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;
    int start = 0, best = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}
