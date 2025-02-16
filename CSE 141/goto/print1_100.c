#include<stdio.h>

int main(){

    int i=1;

    start:
    if(i<=100){
        printf("%d\n", i);
        i++;
        goto start;
    }

    return 0;
}