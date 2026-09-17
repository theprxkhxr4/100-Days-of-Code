// Write a program to print all the prime numbers from 1 to n.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int num = 2; num <= n; num++) {
        int prime = 1;
        for (int d = 2; d * d <= num; d++) {
            if (num % d == 0) { prime = 0; break; }
        }
        if (prime) printf("%d ", num);
    }
    putchar('\n');
    return 0;
}
