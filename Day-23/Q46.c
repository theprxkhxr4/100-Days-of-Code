//Q46: Write a program to print the following pattern:
/*
*****
*****
*****
*****
*****
*/

/*
Sample Test Cases:
Input 1:
5
Output 1:
*****
*****
*****
*****
*****

Input 2:
3
Output 2:
***
***
***
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Print n rows, each containing n stars (a solid square)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}