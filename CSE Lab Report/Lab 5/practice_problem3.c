#include <stdio.h>

int main()
{
    float salary, bonus;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    int range;
    if (salary > 8000 && salary <= 10000)
    {
        range = 1;
    }
    else if (salary > 6000 && salary <= 8000)
    {
        range = 2;
    }
    else if (salary > 3000 && salary <= 6000)
    {
        range = 3;
    }
    else
    {
        range = 4;
    }

    switch (range)
    {
    case 1:
        bonus = salary * 0.08;
        break;
    case 2:
        bonus = salary * 0.05;
        break;
    case 3:
        bonus = salary * 0.02;
        break;
    default:
        bonus = salary * 0.01;
        break;
    }
    printf("The bonus for a salary of %.2f is: %.2f\n", salary, bonus);
    return 0;
}
