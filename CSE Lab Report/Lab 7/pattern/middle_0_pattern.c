#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 1; i <= row; i++)
    {
        
    for (int j = 1; j <= col; j++)
        {
            if(i==(row/2)+1|| j== (row/2)+1) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }

        printf("\n");
    }
}