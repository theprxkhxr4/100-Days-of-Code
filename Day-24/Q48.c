//Q48: Write a program to print the following pattern:
/*
1
12
123
1234
12345
*/

/*
Sample Test Cases:
Input 1:
5
Output 1:
1
12
123
1234
12345

Input 2:
3
Output 2:
1
12
123
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Row i prints numbers from 1 up to i
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}