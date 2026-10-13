// Find the pivot integer x such that sum(1..x) == sum(x..n).
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <math.h>
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    long long total = (long long)n * (n + 1) / 2;
    long long x = (long long)sqrt((double)total);
    if (x * x == total) printf("%lld\n", x);
    else printf("-1\n");
    return 0;
}
