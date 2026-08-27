// Write a program to input a year and check whether it is a leap year or not using conditional statements.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int y;
    scanf("%d", &y);
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    return 0;
}
