//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
4
Output 1:
2.19

Input 2:
2
Output 2:
1.24
*/
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, numerator, denominator;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Numerator of term i = 2i
    // Denominator of term i = 4i - 1
    for (int i = 1; i <= n; i++) {
        numerator = 2 * i;
        denominator = 4 * i - 1;
        sum += numerator / denominator;
    }

    printf("%.2f", sum);

    return 0;
}