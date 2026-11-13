// Assign explicit enum values starting from 10 and print them.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

enum Code { A = 10, B, C };

int main(void) {
    printf("A=%d B=%d C=%d\n", A, B, C);
    return 0;
}
