#include <stdio.h>

int main()
{
    int row = 9, col = 9;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if(i==(row/2)+1 || j==(row/2)+1 || (j==1 && i<(row/2)+1) || (j==row && i >(row/2)+1) || (i==row && j<(row/2)+1) || (i==1 && j>(row/2)+1)){

                printf("* ");
            } else {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}