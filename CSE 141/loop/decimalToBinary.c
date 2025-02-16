#include<stdio.h>

int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    int bi=0, i=1, rem;

    while(n!=0){
        rem = n%2;
        bi = bi + (rem*i);
        i*=10;
        n=n/2;
    }
    printf("Binary = %d\n", bi);

    return 0;

}