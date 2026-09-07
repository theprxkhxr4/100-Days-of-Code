// Write a program to find the HCF (GCD) of two numbers.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    printf("%d\n", a);
    return 0;
}
