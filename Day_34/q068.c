// Delete an element from an array.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, pos, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    for (int i = 0; i < n; i++) printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    return 0;
}
