#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 1; i <= row; i++)
    {
        
    for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    for (int i = 1; i <= row; i++)
    {
        
    for (int j = (row-1); j>=i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}