// First negative integer in each subarray of size k.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, k, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    for (int i = 0; i <= n - k; i++) {
        int neg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) { neg = arr[i + j]; break; }
        }
        printf("%d%s", neg, i == n - k ? "\n" : " ");
    }
    return 0;
}
