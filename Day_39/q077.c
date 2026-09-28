// Check if the elements on the diagonal of a matrix are distinct.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int r, c, a[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    int n = r < c ? r : c;
    int distinct = 1;
    for (int i = 0; i < n && distinct; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j]) { distinct = 0; break; }
    printf("%s\n", distinct ? "True" : "False");
    return 0;
}
