// Open data.txt in append mode and append a new line of text.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char line[256];
    fgets(line, sizeof(line), stdin);
    FILE *fp = fopen("data.txt", "a");
    if (!fp) return 1;
    fprintf(fp, "\n%s", line);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}
