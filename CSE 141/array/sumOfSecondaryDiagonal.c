#include <stdio.h>

int main()
{
    int n;
    printf("enter rows and column: ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // sum of secondary diagonal
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==(n-1)){
                sum+=matrix[i][j];
            }
        }
    }

    printf("Sum of secondary diagonal: %d\n", sum);

    return 0;
}