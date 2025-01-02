#include <stdio.h>

int main() {
    int rows = 5, i, j, num;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print the first half of the palindrome
        for (j = 1, num = 1; j <= i; j++) {
            printf("%d ", num++);
        }

        // Print the second half of the palindrome
        for (j = i - 1, num -= 2; j >= 1; j--) {
            printf("%d ", num--);
        }

        printf("\n");
        
    }

    return 0;
}
