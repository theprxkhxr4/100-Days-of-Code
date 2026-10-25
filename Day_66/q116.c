// Two Sum: find two distinct indices i and j such that nums[i] + nums[j] == target.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, target, nums[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}
