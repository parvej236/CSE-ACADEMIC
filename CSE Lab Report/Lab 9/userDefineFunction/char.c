#include<stdio.h>

int main(){
    char ara[80], ch;
    int i=0;
    while (ch!='\n')
    {
        ch = getchar();
        ara[i]=ch;
        i++;
    }
    ara[i]='\0';
    printf("%s\n", ara);

    // term - 3 ways for get string by char array
    
}