// Create an enum for months and print how many days each month has.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void) {
    char s[10];
    scanf("%9s", s);
    if (strcmp(s, "FEB") == 0) printf("28 or 29 days\n");
    else if (strcmp(s, "APR") == 0 || strcmp(s, "JUN") == 0 ||
             strcmp(s, "SEP") == 0 || strcmp(s, "NOV") == 0)
        printf("30 days\n");
    else
        printf("31 days\n");
    return 0;
}
