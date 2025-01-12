#include<stdio.h>

union item{
    char ch;
    int id;
    float price;
};

int main(){
    union item x;
    printf("Size of union: %zu bytes\n", sizeof(x));
    x.id = 10;
    printf("ID=%d\n", x.id);
    x.price = 100.5;
    printf("Price=%.2f\n", x.price);
}