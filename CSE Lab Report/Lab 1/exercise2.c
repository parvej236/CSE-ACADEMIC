#include<stdio.h>

int main()
{
    int length, breadth, area;

    printf("Enter the length and breadth of a rectangle: ");
    scanf("%d %d", &length, &breadth);
    area=length*breadth;

    printf("Area: %d", area);

    return 0;
}
