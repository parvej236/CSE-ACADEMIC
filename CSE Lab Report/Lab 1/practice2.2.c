#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(isupper(ch)) {
        printf("Upper case\n");
    } else {
        printf("Lower Case");
    }

    return 0;
}
