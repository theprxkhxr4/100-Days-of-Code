// Find the majority element (appears strictly more than n/2 times) or -1.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, nums[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    int cand = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (cnt == 0) { cand = nums[i]; cnt = 1; }
        else if (nums[i] == cand) cnt++;
        else cnt--;
    }
    int freq = 0;
    for (int i = 0; i < n; i++) if (nums[i] == cand) freq++;
    printf("%d\n", freq > n / 2 ? cand : -1);
    return 0;
}
