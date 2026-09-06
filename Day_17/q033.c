// Write a program to check if a number is an Armstrong number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <math.h>
#include <stdio.h>

int main(void) {
    int n, orig, digits = 0;
    scanf("%d", &n);
    orig = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    int sum = 0;
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += (int)round(pow(d, digits));
        temp /= 10;
    }
    printf("%s\n", sum == orig ? "Armstrong" : "Not Armstrong");
    return 0;
}
