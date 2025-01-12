#include<stdio.h>

double triangle_area(double base, double height);

int main(){
    double res = triangle_area(3, 3.5);
    printf("%lf\n", res);

    return 0;
}

double triangle_area(double base, double height){
    double ans;
    ans = 0.5*base*height;
    return ans;
}