//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
10 20 30 40 50

Input 2:
3
1 2 3
Output 2:
1 2 3
*/
#include <stdio.h>

int main() {
    int n, arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    // Read n elements into the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print all elements of the array
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}