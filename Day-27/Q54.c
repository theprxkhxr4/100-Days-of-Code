//Q54: Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
   *
  ***
 *****
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

    // Upper half (includes widest row): rows 1 to n
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower half (mirror, excludes widest row): rows n-1 down to 1
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}