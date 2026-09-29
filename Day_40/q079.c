// Perform diagonal traversal of a matrix.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int r, c, a[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (int d = 0; d < r + c - 1; d++) {
        if (d % 2 == 0) {
            int i = d < r ? d : r - 1;
            int j = d - i;
            while (i >= 0 && j < c) printf("%d ", a[i--][j++]);
        } else {
            int j = d < c ? d : c - 1;
            int i = d - j;
            while (j >= 0 && i < r) printf("%d ", a[i++][j--]);
        }
    }
    putchar('\n');
    return 0;
}
