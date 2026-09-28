//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
10 45 2 78 33
Output 1:
Max = 78, Min = 2

Input 2:
3
5 5 5
Output 2:
Max = 5, Min = 5
*/
#include <stdio.h>

int main() {
    int n, arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both max and min initially
    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max = %d, Min = %d", max, min);

    return 0;
}