#include<stdio.h>

int main(){
    int a, b, c;
    a = 7, b = 12, c = 3;

    //process 1
    // if(a<b) {
    //     if(a<c){
    //         printf("a: %d", a);
    //     } else {
    //         printf("c: %d", c);
    //     }
    // } else {
    //     if(b<c){
    //         printf("b: %d", b);
    //     } else {
    //         printf("c: %d", c);
    //     }
    // }

    // process 2
    // int smallest = a;
    // if(b<smallest){
    //     smallest = b;
    // }
    // if(c < smallest){
    //     smallest = c;
    // }

    //process 3 - ternary
    int smallest = (a<b) ? ((a<c) ? a : c ) : ((b<c)?b:c);

    printf("smallest: %d", smallest);
    
}