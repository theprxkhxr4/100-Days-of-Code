//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
5
10 15 22 7 8
Output 1:
Even = 3, Odd = 2

Input 2:
4
1 3 5 7
Output 2:
Even = 0, Odd = 4
*/
#include <stdio.h>

int main() {
    int n, arr[100], evenCount = 0, oddCount = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check remainder with 2 to classify each element
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even = %d, Odd = %d", evenCount, oddCount);

    return 0;
}