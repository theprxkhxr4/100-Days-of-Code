// Find the maximum and minimum element in an array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, x;
    scanf("%d", &n);
    scanf("%d", &x);
    int mx = x, mn = x;
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x > mx) mx = x;
        if (x < mn) mn = x;
    }
    printf("Max=%d, Min=%d\n", mx, mn);
    return 0;
}
