// Count frequency of a given character in a string.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char s[1000], target;
    scanf("%999s %c", s, &target);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == target) count++;
    }
    printf("%d\n", count);
    return 0;
}
