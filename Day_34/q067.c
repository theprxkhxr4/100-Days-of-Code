// Insert an element in an array at a given position.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, pos, val, arr[1001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d %d", &pos, &val);
    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
    for (int i = 0; i < n; i++) printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    return 0;
}
