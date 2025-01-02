#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    (num % 3 == 0) ? printf("%d is divisible by 3.\n", num) : printf("%d is not divisible by 3.\n", num);

    return 0;
}
