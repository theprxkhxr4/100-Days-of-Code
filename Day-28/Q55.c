//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
20
Output 1:
2 3 5 7 11 13 17 19

Input 2:
10
Output 2:
2 3 5 7
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    // Check every number from 2 to n for primality
    for (int num = 2; num <= n; num++) {
        int isPrime = 1;

        // A number is prime if it has no divisors from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", num);
    }

    return 0;
}