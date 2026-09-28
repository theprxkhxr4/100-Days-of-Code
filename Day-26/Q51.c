//Q51: Write a program to print the following pattern:
/*
    5
   45
  345
 2345
12345
*/

/*
Sample Test Cases:
Input 1:
5
Output 1:
    5
   45
  345
 2345
12345

Input 2:
3
Output 2:
  3
 23
123
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Row i has (i-1) leading spaces, followed by digits from (n-i+1) to n
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}