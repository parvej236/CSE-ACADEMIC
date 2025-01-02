#include <stdio.h>

int main()
{
    int a, b, c, smallest;

    scanf("%d %d %d", &a, &b, &c);

    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("smallest: %d\n", smallest);

    if (a < b)
    {
        if (a < c)
        {
            printf("a");
        }
        else
        {
            printf("c");
        }
    }
    else
    {
        if (b < c)
        {
            printf("b");
        }
        else
        {
            printf("c");
        }
    }
    return 0;
}