// Read integers from numbers.txt and print their sum and average.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) return 1;
    int x, sum = 0, count = 0;
    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }
    fclose(fp);
    printf("Sum = %d Average = %.2f\n", sum, count ? (double)sum / count : 0.0);
    return 0;
}
