#include <stdio.h>

int main()
{
    float total = 0;
    int units;

    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 75)
    {
        total = units * 50;
    }
    else if (units <= 175)
    {        
        total = 50 * 75 + (units - 100) * 75;
    }
    else if (units <= 275)
    {        
        total = 50 * 75 + 100 * 75 + (units - 175) * 120;
    } 
    else if (units > 275) {
        total = 50 * 75 + 100 * 75 + 100 * 120 + (units - 275) * 150;
    }

    printf("Total: %f\n", total);

    return 0;
}
