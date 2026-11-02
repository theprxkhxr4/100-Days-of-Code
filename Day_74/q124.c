// Copy content from a source file to a destination file using fgetc() and fputc().
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char src[100], dst[100];
    scanf("%99s %99s", src, dst);
    FILE *in = fopen(src, "r");
    FILE *out = fopen(dst, "w");
    if (!in || !out) return 1;
    int ch;
    while ((ch = fgetc(in)) != EOF) fputc(ch, out);
    fclose(in);
    fclose(out);
    printf("File copied successfully to %s\n", dst);
    return 0;
}
