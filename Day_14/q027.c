// Write a program to print the sum of the first n odd numbers.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum += 2 * i + 1;
    }
    printf("%d\n", sum);
    return 0;
}
