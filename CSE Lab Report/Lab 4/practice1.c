#include<stdio.h>

int main() {
    int units, total, a, b, c;
    printf("Enter the units: ");
    scanf("%d", &units);

    if(units >= 275) {
        units = units - 275;
        total = units * 150;
        
    } else if (units <= 100) {
        units = units - 100;
        total = units * 120;
    } else if (units <= 274)

    
    printf("Total: %d\n", total);

}