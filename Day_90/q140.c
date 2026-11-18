// Define a struct with enum Gender and print person's gender.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main(void) {
    char s[20];
    scanf("%19s", s);
    struct Person p = { MALE };
    if (strcmp(s, "FEMALE") == 0) p.gender = FEMALE;
    else if (strcmp(s, "OTHER") == 0) p.gender = OTHER;

    if (p.gender == MALE) printf("Male\n");
    else if (p.gender == FEMALE) printf("Female\n");
    else printf("Other\n");
    return 0;
}
