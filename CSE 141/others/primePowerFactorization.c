#include <stdio.h>

void primeFactorization(int n) {
    int count = 0;
    int first = 1; // To manage formatting for the first factor

    // Handle the factor of 2
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    if (count > 0) {
        if (!first) {
            printf(" x ");
        }
        printf("2^%d", count);
        first = 0; // Set first to false after printing the first factor
    }

    // Handle odd factors from 3 onwards
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            if (!first) {
                printf(" x ");
            }
            printf("%d^%d", i, count);
            first = 0; // Set first to false after printing the first factor
        }
    }

    // If n is still greater than 2, it must be a prime number
    if (n > 2) {
        if (!first) {
            printf(" x ");
        }
        printf("%d^1", n);
    }
}

int main() {
    int number;

    printf("Enter a number to factorize: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("Invalid input! Enter a number greater than 1.\n");
        return 0;
    }

    printf("Prime factorization: ");
    primeFactorization(number);
    printf("\n");

    return 0;
}
