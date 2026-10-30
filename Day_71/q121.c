// Create info.txt in write mode, write user's name and age using fprintf(), and confirm.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    char name[100];
    int age;
    scanf("%99s %d", name, &age);
    FILE *fp = fopen("info.txt", "w");
    if (!fp) return 1;
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
