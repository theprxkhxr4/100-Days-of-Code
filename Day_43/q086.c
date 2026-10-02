// Check if a string is a palindrome.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    scanf("%999s", s);
    size_t l = 0, r = strlen(s);
    int ok = 1;
    if (r > 0) r--;
    while (l < r) {
        if (s[l++] != s[r--]) { ok = 0; break; }
    }
    printf("%s\n", ok ? "Palindrome" : "Not palindrome");
    return 0;
}
