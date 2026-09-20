// Reverse an array without taking extra space.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int l = 0, r = n - 1; l < r; l++, r--) {
        int t = arr[l];
        arr[l] = arr[r];
        arr[r] = t;
    }
    for (int i = 0; i < n; i++) printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    return 0;
}
