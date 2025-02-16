#include <stdio.h>
#include <math.h>

void circle(float r, float *area, float *perimeter) {
    float PI = acos(-1);
    *area = PI*r*r;
    *perimeter = 2*PI*r;
}

int main() {
    float A, P;
    circle(1, &A, &P);
    printf("A = %.2f, P = %.2f\n", A, P);
}