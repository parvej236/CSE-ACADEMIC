#include <stdio.h>

int main()
{
    int ara[5] = {4, 1, 6, 2, 8};
    int min = ara[0];
    int max = ara[0];
    for (int i = 0; i < 5; i++)
    {
        if (ara[i] < min)
        {
            min = ara[i];
        }

        if (ara[i] > max)
        {
            max = ara[i];
        }
    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}