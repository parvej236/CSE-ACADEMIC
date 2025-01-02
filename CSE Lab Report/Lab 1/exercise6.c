#include<stdio.h>
#define PI acos(-1)

int main()
{
    double radius, diameter, area;
    scanf("%lf", &radius);
    diameter=2*radius;
    area=PI*radius*radius;

    printf("Diameter= %lf\narea= %lf", diameter, area);
    return 0;
}
