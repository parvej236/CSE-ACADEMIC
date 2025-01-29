#include <stdio.h>

int main()
{
    int rows, cols;
    printf("enter rows and column: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    int *ptr = &matrix[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           
            // sum += *(ptr+i);
            sum += *(ptr + i*cols + j);
        }
    }
    printf("Sum: %d\n", sum);
    
        

    return 0;
}