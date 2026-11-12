// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char s[20];
    scanf("%19s", s);
    enum Status st = SUCCESS;
    if (strcmp(s, "FAILURE") == 0) st = FAILURE;
    else if (strcmp(s, "TIMEOUT") == 0) st = TIMEOUT;

    switch (st) {
        case SUCCESS: printf("Operation succeeded\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }
    return 0;
}
