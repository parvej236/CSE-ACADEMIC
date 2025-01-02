#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int flag = 0;

    if (n >= 1 && n <= 1000)
    {
        for (int i = 2; i <= (int)sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }
        }

        if (flag == 0)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");
        }
    } else {
        printf("Invalid input");
    }
}