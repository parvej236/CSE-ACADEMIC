#include <stdio.h>

void primeFactorization(int n) {
    int first = 1; // To manage "x" formatting

    // Check all possible factors
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            if (!first) printf(" x ");
            printf("%d^%d", i, count);
            first = 0; // Set first to false after the first factor
        }
    }

    // If any prime factor > sqrt(n) remains
    if (n > 1) {
        if (!first) printf(" x ");
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
