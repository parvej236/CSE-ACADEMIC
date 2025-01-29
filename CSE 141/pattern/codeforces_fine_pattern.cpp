#include <stdio.h>
#include <stdlib.h> // For abs function

// Function to find the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int row = (2 * n) - 1;
    int col = (2 * n) - 1;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            int x = min(i, abs(2 * n - i));
            int y = min(j, abs(2 * n - j));

            printf("%d ", max(n - x + 1, n - y + 1));
        }
        printf("\n");
    }

    return 0;
}
