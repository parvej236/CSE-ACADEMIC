#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(islower(ch)) {
        printf("Lower case\n");
    } else {
        printf("Upper Case");
    }

    return 0;
}

