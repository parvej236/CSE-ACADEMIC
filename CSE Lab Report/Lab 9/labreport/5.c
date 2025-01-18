#include<stdio.h>

double power(double x, int y){
    if(y==0){
        return 1;
    }
    if(y<0){
        return 1/power(x, -y);
    }

    return x * power(x, y-1);
}

int main(){
    double x;
    int y;
    scanf("%lf %d", &x, &y);

    double reuslt = power(x, y);
    printf("Result: %.2lf\n", reuslt);

}