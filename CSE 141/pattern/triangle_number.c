#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 1; i <= row; i++)
    {
        for (int j=1;j<=(col-i);j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i>=j)
            {
                printf("%d  ", j);
            } else {
                printf("%d  ", (2*i-j));
            }
        }

        printf("\n");
    }
}