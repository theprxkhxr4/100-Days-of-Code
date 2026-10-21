// Maximum sum of any contiguous subarray using Kadane's algorithm.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int cur = arr[0], best = arr[0];
    for (int i = 1; i < n; i++) {
        cur = (cur + arr[i] > arr[i]) ? cur + arr[i] : arr[i];
        if (cur > best) best = cur;
    }
    printf("%d\n", best);
    return 0;
}
