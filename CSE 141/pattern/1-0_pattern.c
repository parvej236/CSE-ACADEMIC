#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 1; i <= row; i++)
    {
        
    for (int j = 1; j <= col; j++)
        {
            if (j==1||j==(row)||i==1||i==row)
            {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }

        printf("\n");
    }
}