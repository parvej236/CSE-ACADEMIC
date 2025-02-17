#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j=i;j<n;j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i>=j)
            {
                printf("%3d", j);
            } else {
                printf("%3d", (2*i-j));
            }
        }

        printf("\n");
    }
}