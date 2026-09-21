// Merge two arrays.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n1, n2, a[1000], b[1000];
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n1; i++) printf("%d ", a[i]);
    for (int i = 0; i < n2; i++) printf("%d%s", b[i], i == n2 - 1 ? "\n" : " ");
    return 0;
}
