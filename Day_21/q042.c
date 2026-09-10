// Write a program to check if a number is a perfect number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    printf("%s\n", (n > 0 && sum == n) ? "Perfect number" : "Not perfect number");
    return 0;
}
