#include <stdio.h>

int main()
{
    int row = 5, col = 5;

    for (int i = 0; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",(row-i+1));
        }
        printf("\n");
    }
}