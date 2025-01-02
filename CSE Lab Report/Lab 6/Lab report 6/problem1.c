#include <stdio.h>

int main()
{
    int n, i = 1, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not possible.\n");
        return 1;
    }

    do
    {
        factorial *= i;
        i++;
    } while (i <= n);

    printf("%d! = %d\n", n, factorial);
    return 0;
}
