// Read and print elements of a one-dimensional array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    return 0;
}
