#include<stdio.h>

int main() {
    int y = 1, x = 5, n = 3;
    while (n>0)
    {
        y *= x;
        n--;
    }
    printf("%d\n", y);
    
}