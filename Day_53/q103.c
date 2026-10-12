// Find the leftmost pivot index of an array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, nums[1000], total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }
    int left = 0;
    for (int i = 0; i < n; i++) {
        if (left == total - left - nums[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += nums[i];
    }
    printf("-1\n");
    return 0;
}
