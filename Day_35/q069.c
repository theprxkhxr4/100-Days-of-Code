// Find the second largest element in an array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <limits.h>
#include <stdio.h>

int main(void) {
    int n, x;
    scanf("%d", &n);
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x != first) {
            second = x;
        }
    }
    printf("%d\n", second);
    return 0;
}
