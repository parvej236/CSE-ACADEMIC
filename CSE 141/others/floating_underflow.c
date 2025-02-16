#include <stdio.h>
#include <float.h>

int main() {
    float x = 1e-40;  // Very small number
    printf("Before Underflow: %e\n", x);
    
    x = x / 1000000;  // Underflow happens here
    printf("After Underflow: %e\n", x);  // Becomes zero!
    
    int i = 5, j=3,k=7,c=2;
    int a;

    a = i +1== j || k && 3 != c;
    printf("a:%d",a);

    return 0;

}
