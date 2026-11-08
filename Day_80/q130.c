// Store student records into students.txt using fprintf() and read them using fscanf().
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("students.txt", "w");
    if (!fp) return 1;
    fprintf(fp, "Asha 101 85\nRavi 102 92\n");
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (!fp) return 1;
    char name[100];
    int roll, marks;
    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
