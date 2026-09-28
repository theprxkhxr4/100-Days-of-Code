//Q53: Write a program to print the following pattern:
/*
*
***
*****
*******
*********
*******
*****
***
*
*/

/*
Sample Test Cases:
Input 1:
5
Output 1:
*
***
*****
*******
*********
*******
*****
***
*

Input 2:
3
Output 2:
*
***
*****
***
*
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter half-height of pattern: ");
    scanf("%d", &n);

    // Upper half: rows 1 to n, stars increase as (2*i - 1), left-aligned
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower half: rows n-1 down to 1 (mirror), left-aligned
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}