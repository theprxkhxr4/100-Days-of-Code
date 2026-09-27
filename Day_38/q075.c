// Add two matrices.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2, a[100][100], b[100][100];
    scanf("%d %d", &r1, &c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    scanf("%d %d", &r2, &c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++)
            printf("%d%s", a[i][j] + b[i][j], j == c1 - 1 ? "" : " ");
        putchar('\n');
    }
    return 0;
}
