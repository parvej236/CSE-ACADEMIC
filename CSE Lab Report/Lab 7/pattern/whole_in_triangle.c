#include <stdio.h>

int main() {
    int rows = 5, i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
