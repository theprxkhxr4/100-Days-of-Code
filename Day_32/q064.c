// Find the digit that occurs the most times in an integer number.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);
    if (n < 0) n = -n;
    int freq[10] = {0};
    if (n == 0) freq[0] = 1;
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
    int best = 0;
    for (int d = 1; d < 10; d++) {
        if (freq[d] > freq[best]) best = d;
    }
    printf("%d\n", best);
    return 0;
}
