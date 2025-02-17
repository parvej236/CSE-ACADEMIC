#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= col; j++)
        {
            // if(i<(row-j+1)){
            //     // printf("%d ", (row+1-i));
            //     printf("* ");
            // } else {
            //     printf("%d ", j);
            // }
            
            if(i>=j){
                printf("%d ", row + 1 -j);
            } else {
                printf("%d ", row +1 - i);
            }
        }

        printf("\n");
    }
}