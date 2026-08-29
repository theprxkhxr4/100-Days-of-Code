// Write a program to find the roots of a quadratic equation and categorize them.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <math.h>
#include <stdio.h>

int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d = b * b - 4 * a * c;
    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2 * a);
        double r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f\n", r1, r2);
    } else if (d == 0) {
        double r = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", r);
    } else {
        printf("Roots are complex\n");
    }
    return 0;
}
