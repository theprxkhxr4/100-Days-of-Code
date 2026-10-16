// Find the previous greater element for each element in an array using nested loops.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        int pge = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) { pge = arr[j]; break; }
        }
        printf("%d%s", pge, i == n - 1 ? "\n" : ", ");
    }
    return 0;
}
