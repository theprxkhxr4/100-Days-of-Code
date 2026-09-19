// Count even and odd numbers in an array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, x, even = 0, odd = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) even++;
        else odd++;
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
