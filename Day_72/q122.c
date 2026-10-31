// Open info.txt and read its contents using fgets() until EOF.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("info.txt", "r");
    if (!fp) {
        printf("Error opening file!\n");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
