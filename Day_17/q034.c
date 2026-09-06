// Write a program to check if a number is prime.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, is_prime = 1;
    scanf("%d", &n);
    if (n <= 1) is_prime = 0;
    for (int i = 2; i * i <= n && is_prime; i++) {
        if (n % i == 0) is_prime = 0;
    }
    printf("%s\n", is_prime ? "Prime" : "Not prime");
    return 0;
}
