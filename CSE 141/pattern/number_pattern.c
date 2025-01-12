#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 1; i <= row; i++)
    {

        for (int j = row; j > 0; j--)
        {
            if(i<(row-j+1)){
                printf("%d ", (row+1-i));
            } else {
                printf("%d ", j);
            }            
        }

        printf("\n");
    }
}