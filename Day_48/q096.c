// Reverse each word in a sentence without changing the word order.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int n = (int)strlen(s);
    if (n > 0 && s[n - 1] == '\n') s[--n] = '\0';
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            int l = start, r = i - 1;
            while (l < r) {
                char t = s[l]; s[l] = s[r]; s[r] = t;
                l++; r--;
            }
            start = i + 1;
        }
    }
    printf("%s\n", s);
    return 0;
}
