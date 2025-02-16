#include<stdio.h>

int main(){
    int a, b;
    a = 5, b = 10;

    // without tmp variable
    a = a + b;
    b = a - b;
    a = a - b;

    // with tmp variable
    // int tmp = a;
    // a = b;
    // b = tmp;

    printf("%d %d\n", a, b);

}