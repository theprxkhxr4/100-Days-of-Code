// Write a program to find the product of odd digits of a number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, prod = 1;
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) prod *= d;
        n /= 10;
    }
    printf("%d\n", prod);
    return 0;
}
