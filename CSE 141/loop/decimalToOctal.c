#include<stdio.h>

int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    int oct=0, i=1, rem;

    while(n!=0){
        rem = n%8;
        oct = oct + (rem*i);
        i*=10;
        n=n/8;
    }
    printf("Octal = %d\n", oct);

    return 0;

}