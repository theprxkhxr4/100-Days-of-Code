// Write a program to print the product of even numbers from 1 to n.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    long long prod = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        prod *= i;
    }
    printf("%lld\n", prod);
    return 0;
}
