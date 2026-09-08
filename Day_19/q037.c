// Write a program to find the LCM of two numbers.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    printf("%d\n", (a / x) * b);
    return 0;
}
