#include <stdio.h>

int main() {
    int rows = 8, coef = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("* ");
        }            

        for (int j = 0; j <= i; j++) {
            if (i == 0 || j == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);
        }
        printf("\n");
    }

    return 0;
}
