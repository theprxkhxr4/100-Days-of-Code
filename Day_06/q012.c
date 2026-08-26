// Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if (n >= 0) {
        if (n == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }
    return 0;
}
