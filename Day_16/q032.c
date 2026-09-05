// Write a program to check if a number is a palindrome.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int n, orig, rev = 0;
    scanf("%d", &n);
    orig = n;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("%s\n", orig == rev ? "Palindrome" : "Not palindrome");
    return 0;
}
