#include <stdio.h>

int main() {
    int n, m;    
    printf("Enter the number of rows (N): ");
    scanf("%d", &n);
    printf("Enter the number of columns (M): ");
    scanf("%d", &m);

    int matrix[n][m];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Unique elements in each row:\n");
    for (int i = 0; i < n; i++) {        
        // A simple way to track if the element has been printed
        for (int j = 0; j < m; j++) {
            int isUnique = 1;
            for (int k = 0; k < j; k++) {
                if (matrix[i][j] == matrix[i][k]) {
                    isUnique = 0;
                    break;
                }
            }
            if (isUnique) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
