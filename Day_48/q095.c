// Check if one string is a rotation of another.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

int main(void) {
    char a[500], b[500], doubled[1000];
    scanf("%499s %499s", a, b);
    if (strlen(a) == strlen(b)) {
        strcpy(doubled, a);
        strcat(doubled, a);
        if (strstr(doubled, b) != NULL) {
            printf("Rotation\n");
            return 0;
        }
    }
    printf("Not rotation\n");
    return 0;
}
