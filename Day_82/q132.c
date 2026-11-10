// Define an enum for traffic lights (RED, YELLOW, GREEN) and print Stop, Wait, or Go.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

enum Light { RED, YELLOW, GREEN };

int main(void) {
    char s[20];
    scanf("%19s", s);
    enum Light light = RED;
    if (strcmp(s, "YELLOW") == 0) light = YELLOW;
    else if (strcmp(s, "GREEN") == 0) light = GREEN;

    if (light == RED) printf("Stop\n");
    else if (light == YELLOW) printf("Wait\n");
    else printf("Go\n");
    return 0;
}
