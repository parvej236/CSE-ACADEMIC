#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int l = 0, x;
    gets(str);

    // while(str[l]!='\0'){
    //    l++;
    // }
    // printf("Length: %d\n", l);

    x = strlen(str);
    printf("length: %d\n", x);
}
