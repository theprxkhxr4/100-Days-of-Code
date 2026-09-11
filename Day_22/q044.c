// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) sum += 1.0;
        else sum += (double)(2 * i - 1) / (double)(2 * i);
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
