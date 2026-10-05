// Find the first repeating lowercase alphabet in a string.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char s[1000];
    scanf("%999s", s);
    int seen[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (seen[s[i] - 'a']) {
                printf("%c\n", s[i]);
                return 0;
            }
            seen[s[i] - 'a'] = 1;
        }
    }
    printf("None\n");
    return 0;
}
