// Maximum element in each subarray of size k.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, k, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    for (int i = 0; i <= n - k; i++) {
        int mx = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > mx) mx = arr[i + j];
        }
        printf("%d%s", mx, i == n - k ? "\n" : " ");
    }
    return 0;
}
