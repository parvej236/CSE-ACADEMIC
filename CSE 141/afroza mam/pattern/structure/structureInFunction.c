#include<stdio.h>

struct cmplx {
    float real;
    float img;
};

struct cmplx add(struct cmplx c1, struct cmplx c2){
    struct cmplx ans;
    ans.real = c1.real + c2.real;
    ans.img = c1.img + c2.img;
    return ans;
}


int main(){
    struct  cmplx c1, c2, c3;
    c1.real = 1, c1.img = 2;
    c2.real = 0.5, c2.img = 1.6;
    c3 = add(c1, c2);
    printf("%.2f+%.2fi\n",c3.real, c3.img);
}