#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            sum += i;
        }
    }

    printf("Sum: %d\n",sum);

    return 0;
}
