// Check if two strings are anagrams of each other.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char a[1000], b[1000];
    scanf("%999s %999s", a, b);
    int cnt[256] = {0};
    for (int i = 0; a[i]; i++) cnt[(unsigned char)a[i]]++;
    for (int i = 0; b[i]; i++) cnt[(unsigned char)b[i]]--;
    for (int i = 0; i < 256; i++) {
        if (cnt[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
