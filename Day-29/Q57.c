//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
150

Input 2:
3
1 2 3
Output 2:
6
*/
#include <stdio.h>

int main() {
    int n, arr[100], sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Add each element to the running total
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}