#include<stdio.h>

int main()
{
    float base, height, area;
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area=.5*base*height;

    printf("Area: %f", area);

    return 0;
}
