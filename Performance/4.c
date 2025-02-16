#include <stdio.h>
#define PI 3.1416

struct circle{
    float rdi;
};

int main()
{
    struct circle info[5];
    for(int i=0;i<5;i++){
        scanf("%f", &info[i].rdi);
    }

    float sum = 0;
    for(int i=0;i<5;i++){
        float r = info[i].rdi;
        float area = PI*r*r;
        sum+=area;
        printf("Area of circle %d: %.2f\n", (i+1), area);
    }

    printf("\nTotal area of all 5 circles: %.2f\n", sum);

    return 0;
}
