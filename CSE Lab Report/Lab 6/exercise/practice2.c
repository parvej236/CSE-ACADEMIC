#include <stdio.h>

int main()
{
    int salary;
    float bonus = 0;

    printf("Enter the salary: ");
    scanf("%d", &salary);

    salary = salary / 1000;

    switch (salary)
    {
    case 10:
    case 9:
    case 8:
        bonus = salary * 1000 * 0.08;
        break;
    case 7:
    case 6:
        bonus = salary*1000 * 0.05;
        break;
    case 5:
    case 4:
    case 3:
        bonus = salary*1000 * 0.02;
        break;
    default:
        bonus = salary*1000 * 0.01;
        break;
    }
    printf("The bonus for a salary of %d is: %.2f\n", salary, bonus);
    return 0;
}
