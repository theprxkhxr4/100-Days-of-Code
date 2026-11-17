// Show that enums store integers by printing assigned values.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
