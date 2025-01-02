#include <stdio.h>

int main()
{
    int n, reversed = 0;
    scanf("%d", &n);
    int count0=0, count1=0;
    while (n > 0)
    {
        reversed = reversed * 10 + (n % 2);
        if(n%2==0) {
            count0++;
        } else {
            count1++;
        }
        n = n / 2;
    }
    while (reversed > 0)
    {
        printf("%d", reversed % 10);
        reversed = reversed / 10;
    }

    printf("\ncount0 = %d, count1 = %d\n", count0, count1);
    return 0;
}
