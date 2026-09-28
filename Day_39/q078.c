// Find the sum of main diagonal elements for a square matrix.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int r, c, a[100][100], sum = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) sum += a[i][j];
        }
    printf("%d\n", sum);
    return 0;
}
