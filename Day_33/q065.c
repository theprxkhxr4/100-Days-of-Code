// Search in a sorted array using binary search.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, key, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == key) {
            printf("Found at index %d\n", m);
            return 0;
        }
        if (arr[m] < key) l = m + 1;
        else r = m - 1;
    }
    printf("-1\n");
    return 0;
}
