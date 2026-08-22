// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int l, b;
    scanf("%d %d", &l, &b);
    printf("Area=%d, Perimeter=%d\n", l * b, 2 * (l + b));
    return 0;
}
