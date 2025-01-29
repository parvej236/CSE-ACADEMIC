#include<stdio.h>

int main(){
    int i =1;
    start:
        if(i<=100){
            printf("%d ", i);
            i++;
            goto start;
        }
}