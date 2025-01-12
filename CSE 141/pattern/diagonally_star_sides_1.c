#include <stdio.h>

int main()
{
    int row = 11, col = 11;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || (i+j)==(row-1))
            {
                printf("* ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}