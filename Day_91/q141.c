// Define a structure Student with name, roll_no, and marks, then read and print one student's data.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s;
    scanf("%99s %d %d", s.name, &s.roll_no, &s.marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
