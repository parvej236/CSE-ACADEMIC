#include <stdio.h>

int main()
{
    int row = 8, col = 8;

    for (int i = 1; i <= row; i++)
    {
         for (int j = row; j>i;j--)
        {
            printf(" ");
         
        }

        for (int j = 1; j <= col; j++)
        {
            printf("* ");
            
        }
        printf("\n");
    }
}