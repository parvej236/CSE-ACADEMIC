#include <stdio.h>

int sum(int n)
{
    if (n == 0) // base case
    {
        return 0;
    }
    else // recursive case
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n = 5;
    printf("Sum: %d", sum(n));
}