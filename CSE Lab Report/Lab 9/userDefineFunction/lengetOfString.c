#include<stdio.h>

int main(){
    char str[100];
    int i=0, c;
    gets(str);

    while (str[i]='\0')
    {
        i++;
    }

    printf("Length of the string {%s=%d}\n", str, i);
    
}