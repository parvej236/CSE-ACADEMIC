#include <stdio.h>

int main()
{
    int x, n, m = 1;
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        m = m * x;
    }
    printf("Result: %d\n", m);

    return 0;
}