// Merge two sorted arrays such that the merged array is also sorted.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int m, n, a[1000], b[1000];
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    int i = 0, j = 0, first = 1;
    while (i < m && j < n) {
        if (!first) putchar(' ');
        first = 0;
        printf("%d", a[i] <= b[j] ? a[i++] : b[j++]);
    }
    while (i < m) { if (!first) putchar(' '); first = 0; printf("%d", a[i++]); }
    while (j < n) { if (!first) putchar(' '); first = 0; printf("%d", b[j++]); }
    putchar('\n');
    return 0;
}
