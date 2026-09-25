// Find the sum of all elements in a matrix.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int r, c, x, sum = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r * c; i++) {
        scanf("%d", &x);
        sum += x;
    }
    printf("%d\n", sum);
    return 0;
}
