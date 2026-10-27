// Find the missing number in an array containing integers from 0 to n except one.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, x, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }
    int expected = n * (n + 1) / 2;
    printf("%d\n", expected - sum);
    return 0;
}
