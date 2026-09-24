// Rotate an array to the right by k positions.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, k, arr[1000], out[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    k %= n;
    for (int i = 0; i < n; i++) out[(i + k) % n] = arr[i];
    for (int i = 0; i < n; i++) printf("%d%s", out[i], i == n - 1 ? "\n" : " ");
    return 0;
}
