// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
// Source: https://maitysoumik.github.io/basic-coding-with-c/

#include <stdio.h>

int main(void) {
    int d, m, y;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    scanf("%d/%d/%d", &d, &m, &y);
    if (m >= 1 && m <= 12) {
        printf("%02d-%s-%04d\n", d, months[m], y);
    }
    return 0;
}
