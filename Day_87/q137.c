// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    char s[20];
    scanf("%19s", s);
    enum Role r = GUEST;
    if (strcmp(s, "ADMIN") == 0) r = ADMIN;
    else if (strcmp(s, "USER") == 0) r = USER;

    if (r == ADMIN) printf("Welcome Admin!\n");
    else if (r == USER) printf("Welcome User!\n");
    else printf("Welcome Guest!\n");
    return 0;
}
