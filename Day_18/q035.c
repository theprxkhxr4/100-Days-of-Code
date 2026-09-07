// Write a program to print all factors of a given number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d%s", i, i == n ? "" : " ");
        }
    }
    printf("\n");
    return 0;
}
