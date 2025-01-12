#include <stdio.h>

void printPattern(int X) {
    int i, j;
    
   
    for (i = 1; i <= X; i++) {
        for (j = 1; j <= X - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("x");
        }
        printf("\n");
    }

   
    for (i = 0; i < X - 1; i++) {
        printf("x");
        for (j = 1; j <= 2 * (X - i - 1) - 1; j++) {
            printf(" ");
        }
        printf("x\n");
    }
    
   
    for (i = X - 1; i >= 1; i--) {
        for (j = 1; j <= X - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("x");
        }
        printf("\n");
    }
}

int main() {
    int X;

    
    printf("Enter the value of X: ");
    scanf("%d", &X);

    
    printPattern(X);

    return 0;
}