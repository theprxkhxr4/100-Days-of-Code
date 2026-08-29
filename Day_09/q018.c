// Write a program that accepts a percentage (0-100) and assigns a grade.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int p;
    scanf("%d", &p);
    if (p >= 90) printf("Grade A\n");
    else if (p >= 80) printf("Grade B\n");
    else if (p >= 70) printf("Grade C\n");
    else if (p >= 60) printf("Grade D\n");
    else printf("Grade F\n");
    return 0;
}
