// Find the kth smallest element in an array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <stdlib.h>

static int cmp_int(const void *a, const void *b) {
    return (*(const int *)a - *(const int *)b);
}

int main(void) {
    int n, k, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    qsort(arr, (size_t)n, sizeof(int), cmp_int);
    printf("%d\n", arr[k - 1]);
    return 0;
}
