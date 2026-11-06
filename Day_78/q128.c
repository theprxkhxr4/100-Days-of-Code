// Read text.txt and count vowels and consonants.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("text.txt", "r");
    if (!fp) return 1;
    int ch, vowels = 0, consonants = 0;
    while ((ch = fgetc(fp)) != EOF) {
        char c = (char)tolower(ch);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
            else consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d Consonants: %d\n", vowels, consonants);
    return 0;
}
