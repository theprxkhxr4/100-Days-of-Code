// Write a program to check if a number is a strong number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

static int fact(int d) {
    int f = 1;
    for (int i = 2; i <= d; i++) f *= i;
    return f;
}

int main(void) {
    int n, orig, sum = 0;
    scanf("%d", &n);
    orig = n;
    while (n > 0) {
        sum += fact(n % 10);
        n /= 10;
    }
    printf("%s\n", sum == orig ? "Strong number" : "Not strong number");
    return 0;
}
