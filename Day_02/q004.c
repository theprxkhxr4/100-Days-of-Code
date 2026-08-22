// Write a program to calculate the area and circumference of a circle given its radius.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    double r;
    const double PI = 3.141592653589793;
    scanf("%lf", &r);
    printf("Area=%.2f, Circumference=%.2f\n", PI * r * r, 2 * PI * r);
    return 0;
}
