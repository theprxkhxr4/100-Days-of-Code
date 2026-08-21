// Write a program to input two numbers and display their sum, difference, product, and quotient.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", a + b, a - b, a * b, a / b);
    } else {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined (division by zero)\n", a + b, a - b, a * b);
    }
    return 0;
}
