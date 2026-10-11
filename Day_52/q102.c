// Find the index of the ceil of x in a sorted array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, x, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] >= x) { ans = m; r = m - 1; }
        else l = m + 1;
    }
    printf("%d\n", ans);
    return 0;
}
