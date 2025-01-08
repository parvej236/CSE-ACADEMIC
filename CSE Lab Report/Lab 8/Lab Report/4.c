#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if((i+j)==(rows -1)) {
                sum+=matrix[i][j];
            }
        }
    }
    printf("Sum: %d\n", sum);

    return 0;
}
