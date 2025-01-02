#include <stdio.h>

int main()
{
    double roll;
    scanf("%lf", &roll);
    
    if(roll > 2304067) {
        if(roll > 2304034) {
            printf("Sectioin A1\n");
        } else {
            printf("Section A2\n");
        }
    } else if(roll > 2304133){
        if(roll > 2304099) {
            printf("Section B1\n");
        } else {
            printf("Section B2\n");
        }
    } else {
        printf("Invalid roll\n");
    }

    return 0;
}
