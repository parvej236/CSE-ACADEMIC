#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", a+b);
    printf("Subtraction: %d\n", a-b);
    printf("Muliplication: %d\n", a*b);
    printf("Division: %f\n", (float)a/b);
    printf("Modulus: %d", a%b);

    return 0;
}
