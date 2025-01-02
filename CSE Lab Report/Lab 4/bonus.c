#include <stdio.h>

int main()
{
    int salary;
    scanf("%d", &salary);
    (salary > 5000) ? printf("Total: %lf\n", (salary + salary * .1)) : printf("Total: %lf\n", (salary + salary * .05));

    return 0;
}
