// Check if a matrix is symmetric.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int r, c, a[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    int sym = (r == c);
    for (int i = 0; i < r && sym; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != a[j][i]) { sym = 0; break; }
    printf("%s\n", sym ? "True" : "False");
    return 0;
}
