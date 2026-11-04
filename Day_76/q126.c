// Ask for a filename, check if it exists, and display its content if it does.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char fname[100], line[256];
    scanf("%99s", fname);
    FILE *fp = fopen(fname, "r");
    if (!fp) {
        printf("Error: File does not exist!\n");
        return 0;
    }
    printf("File opened successfully.\n");
    while (fgets(line, sizeof(line), fp) != NULL) printf("%s", line);
    fclose(fp);
    return 0;
}
