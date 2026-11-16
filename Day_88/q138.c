// Print all enum names and integer values using a loop.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d%s", names[i], i, i == GREEN ? "\n" : " ");
    }
    return 0;
}
