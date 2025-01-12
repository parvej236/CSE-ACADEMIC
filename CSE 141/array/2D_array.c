#include <stdio.h>

int main()
{
    int rows, cols;
    printf("enter rows and column: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];

    // printf("Enter the elements:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }

    // sum and diaplay the array
    // printf("Dispaly the array:\n");
    // int sum = 0;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", matrix[i][j]);
    //         sum += matrix[i][j];
    //     }
    //     printf("\n");
    // }
    // printf("Sum: %d\n", sum);

    // transpose of a square matrix
    // printf("Transpose matrix:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", matrix[j][i]);
    //     }
    //     printf("\n");
    // }

    // each row and col sum
    int rowSum[rows];
    int colSum[cols];
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++)
    {
        rowSum[i]=0;
        for (int j = 0; j < cols; j++)
        {
            colSum[i]=0;
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0;i<rows; i++){
        for(int j=0;j<cols;j++){
            rowSum[i]+=matrix[i][j];
            colSum[j]+=matrix[i][j];
        }
    }

    for(int i=0;i<rows; i++){
        printf("Row %d: %d\n", i+1, rowSum[i]);
    }

    for(int i=0;i<cols; i++){
        printf("Col %d: %d\n", i+1, colSum[i]);
    }
    
        

    return 0;
}