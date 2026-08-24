// Write a program to find and display the sum of the first n natural numbers.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("Sum=%d\n", n * (n + 1) / 2);
    return 0;
}
