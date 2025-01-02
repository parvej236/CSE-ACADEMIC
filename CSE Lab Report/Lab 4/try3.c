#include <stdio.h>

int main()
{
    float total = 0;
    int units;

    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 275)
    {
        total += units * 50;
    }
    else if (units <= 275)
    {
        units = units - 100;
        total += units * 120;
    }
    else
    {
        units = units - 275;
        total += units * 150;
    }

    printf("Total: %f\n", total);

    return 0;
}
