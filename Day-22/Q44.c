//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
4
Output 1:
2.87

Input 2:
1
Output 2:
1.00
*/
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, numerator, denominator;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Term 1 is exactly 1 (i.e., 1/1)
    // From term 2 onwards: numerator = 2i - 1, denominator = 2i
    for (int i = 1; i <= n; i++) {
        numerator = 2 * i - 1;
        denominator = (i == 1) ? 1 : 2 * i;
        sum += numerator / denominator;
    }

    printf("%.2f", sum);

    return 0;
}