#include <stdio.h>

int main() {
    float x = 10.4321;
    printf("%f\n", x);
    printf("%07.6f\n", x);
    printf("%*.*f\n", 7, 4, x);
    printf("%10.2e\n", x);
    printf("%12.4e\n", x);
    printf("%e\n", x);
}