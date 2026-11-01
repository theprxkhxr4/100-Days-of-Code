// Read sample.txt and count total characters, words, and lines.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sample.txt", "r");
    if (!fp) return 1;
    int ch, chars = 0, words = 0, lines = 0, in_word = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    if (chars > 0) lines++;
    fclose(fp);
    printf("Characters: %d Words: %d Lines: %d\n", chars, words, lines);
    return 0;
}
