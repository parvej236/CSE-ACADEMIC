#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);
    while (n > 0) {
        reversed = reversed * 10 + (n % 2);
        n = n / 2;
    }
    while (reversed > 0) {
        printf("%d", reversed % 10);


    //wrtie a c program to convet decimal to binary using loop without array without any comment in code 
        reversed = reversed / 10;
    }
    return 0;
}
