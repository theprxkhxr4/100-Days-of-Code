// Write a program to reverse a given number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, rev = 0;
    scanf("%d", &n);
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("%d\n", rev);
    return 0;
}
