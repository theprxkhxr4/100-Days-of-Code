// Read text from input.txt, convert lowercase to uppercase, and write to output.txt.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if (!in || !out) return 1;
    int ch;
    while ((ch = fgetc(in)) != EOF) fputc(toupper(ch), out);
    fclose(in);
    fclose(out);
    return 0;
}
