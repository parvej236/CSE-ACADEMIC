#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 1; i<=row;i++)
    {
        for (int j =1; j <= (row - i); j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j <= i)
            {
                if(j%2==1){
                    printf("%d  ", j);
                } else {
                    printf("*  ");
                }
                
            } else {
                if((2*i-j)%2==0) {
                    printf("*  ");
                } else {
                    printf("%d  ", (2*i-j));
                }
                
            }
        }

        printf("\n");
    }

    for (int i = (row-1); i>0;i--)
    {
        for (int j =1; j <= (row - i); j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j <= i)
            {
                if(j%2==1){
                    printf("%d  ", j);
                } else {
                    printf("*  ");
                }
                
            } else {
                if((2*i-j)%2==0) {
                    printf("*  ");
                } else {
                    printf("%d  ", (2*i-j));
                }
                
            }
        }

        printf("\n");
    }
}