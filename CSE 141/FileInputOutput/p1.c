#include<stdio.h>

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    scanf("%d", &n);
    float cst[n], tst[n];
    for(int i=0;i<n;i++){
        scanf("%f%f", &cst[i], &tst[i]);
    }
    int idx = 0;
    for(int i=0;i<n;i++){
        if(tst[i]>tst[idx]){
            idx = i;
        }
    }
    printf("%.2f\n", cst[idx]);
}