#include <stdio.h>
#include<stdbool.h>

int main() {
    int n;
    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    bool isSymmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

     for (int i = 0; i < n && isSymmetric; i++) {
        for (int j = 0; j < n; j++) {
            if(matrix[i][j]!=matrix[j][i]){
                isSymmetric = false;
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
