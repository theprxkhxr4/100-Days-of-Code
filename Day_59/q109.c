// Maximum sum of all subarrays of size k.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, k, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    int win = 0;
    for (int i = 0; i < k; i++) win += arr[i];
    int best = win;
    for (int i = k; i < n; i++) {
        win += arr[i] - arr[i - k];
        if (win > best) best = win;
    }
    printf("%d\n", best);
    return 0;
}
