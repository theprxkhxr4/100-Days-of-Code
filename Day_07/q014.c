// Write a program to input a character and check whether it is a vowel or consonant using if-else.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch;
    scanf(" %c", &ch);
    char c = (char)tolower((unsigned char)ch);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
    return 0;
}
