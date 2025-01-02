#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int remainder, reversed = 0;

    int i = 1;
    while (n> 0)
    {
        remainder = n % 2;
        reversed = remainder * 2 + reversed;
        printf("%d", remainder);
        n = n / 2;
        i++;
    }
    printf("%d", reversed);


    return 0;
}