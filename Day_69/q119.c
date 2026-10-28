// Find the single repeated element in an array in one iteration.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, x, seen[10000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (seen[x]) {
            printf("%d\n", x);
            return 0;
        }
        seen[x] = 1;
    }
    return 0;
}
