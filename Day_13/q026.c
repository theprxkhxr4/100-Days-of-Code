// Write a program to print numbers from 1 to n.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d%s", i, i == n ? "\n" : " ");
    }
    return 0;
}
