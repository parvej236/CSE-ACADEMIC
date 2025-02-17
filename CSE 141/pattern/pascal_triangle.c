#include <stdio.h>

int main() {
    int n = 7, coef = 1;

    for (int i = 0; i < n; i++) {

        for (int j = i;j<n; j++) {
            printf("  ");
        }            

        for (int j = 0; j <= i; j++) {
            if (i == 0 || j == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }
        printf("\n");
    }

    return 0;
}
