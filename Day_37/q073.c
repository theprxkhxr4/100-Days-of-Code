// Find the sum of each row of a matrix and store it in an array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int r, c, x, row_sum[100] = {0};
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &x);
            row_sum[i] += x;
        }
    }
    for (int i = 0; i < r; i++) printf("%d%s", row_sum[i], i == r - 1 ? "\n" : " ");
    return 0;
}
