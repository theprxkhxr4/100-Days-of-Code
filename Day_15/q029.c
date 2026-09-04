// Write a program to calculate the factorial of a number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    long long fact = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    printf("%lld\n", fact);
    return 0;
}
