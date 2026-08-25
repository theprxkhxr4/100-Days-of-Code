// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int total;
    scanf("%d", &total);
    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
