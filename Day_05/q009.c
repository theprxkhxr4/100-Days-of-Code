// Write a program to calculate simple and compound interest for given principal, rate, and time.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <math.h>
#include <stdio.h>

int main(void) {
    double p, r, t;
    scanf("%lf %lf %lf", &p, &r, &t);
    double si = (p * r * t) / 100.0;
    double ci = p * pow(1.0 + r / 100.0, t) - p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", si, ci);
    return 0;
}
