// Read and print a matrix.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int r, c, a[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d%s", a[i][j], j == c - 1 ? "" : " ");
        putchar('\n');
    }
    return 0;
}
