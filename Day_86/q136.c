// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>
#include <string.h>

enum Op { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char op_str[20];
    int a, b;
    scanf("%19s %d %d", op_str, &a, &b);
    enum Op op = ADD;
    if (strcmp(op_str, "SUBTRACT") == 0) op = SUBTRACT;
    else if (strcmp(op_str, "MULTIPLY") == 0) op = MULTIPLY;

    switch (op) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }
    return 0;
}
