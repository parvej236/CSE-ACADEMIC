#include<stdio.h>
#define PI 3.1416

void circle(float r, float *A, float *P){
    *A = PI*r*r;
    *P = 2*PI*r;
}

void main(){

    printf("Enter r: ");
    int r;
    scanf("%d", &r);

    float A, P;
    circle(r, &A, &P);

    printf("R: %d\n", r);
    printf("Area: %.2f\n", A);
    printf("Perimeter: %.2f\n", P);
}