#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit=(9/5)*celsius+32;

    printf("Fahrenheit: %f", fahrenheit);

    return 0;
}
