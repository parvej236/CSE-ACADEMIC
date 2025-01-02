#include <stdio.h>

int main()
{
    int n;

    do
    {
        scanf("%d", &n);

        if (n < 0)
        {
            break;
        }

        (n % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    } while (n >= 0);

    return 0;
}
