//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-3 0 7 -1 5
Output 1:
Positive = 2, Negative = 2, Zero = 1

Input 2:
3
0 0 0
Output 2:
Positive = 0, Negative = 0, Zero = 3
*/
#include <stdio.h>

int main() {
    int n, arr[100], pos = 0, neg = 0, zero = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Classify each element as positive, negative, or zero
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d, Negative = %d, Zero = %d", pos, neg, zero);

    return 0;
}