// Insert an element in a sorted array at the appropriate position.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, val, arr[1001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &val);
    int i = n - 1;
    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;
    n++;
    for (int j = 0; j < n; j++) printf("%d%s", arr[j], j == n - 1 ? "\n" : " ");
    return 0;
}
