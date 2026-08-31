// Write a program to find profit or loss percentage given cost price and selling price.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);
    if (sp > cp) {
        printf("Profit %.2f%%\n", ((sp - cp) / cp) * 100.0);
    } else if (cp > sp) {
        printf("Loss %.2f%%\n", ((cp - sp) / cp) * 100.0);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
