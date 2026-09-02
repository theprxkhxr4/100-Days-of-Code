// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch (op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/':
            if (b != 0) printf("%d\n", a / b);
            else printf("Division by zero\n");
            break;
        case '%':
            if (b != 0) printf("%d\n", a % b);
            else printf("Division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
