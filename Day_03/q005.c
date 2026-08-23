// Write a program to convert temperature from Celsius to Fahrenheit.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    double c;
    scanf("%lf", &c);
    printf("Fahrenheit=%.2f\n", (c * 9.0 / 5.0) + 32.0);
    return 0;
}
