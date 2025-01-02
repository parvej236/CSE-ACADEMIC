#include<stdio.h>

int main(){
    // int a[10]={5};
    
    // for(int i=0; i<sizeof(a)/sizeof(a[0]);i++){
    //     printf("%d ", a[i]);
    // }

    // a[10]=16;
    // printf("\n%d\n", a[10]);

    //  for(int i=0; i<sizeof(a)/sizeof(a[0]);i++){
    //     printf("%d ", a[i]);
    // }

    // for(int i=0; i<5;i++){
    //     scanf("%d ", &a[i]);
    // }

    // linear search

    // for(int i=0; i<5;i++){
    //     if(a[i]==k){
    //         printf("found %d in %d index\n", k, i+1);
    //         break;
    //     } else {
    //         printf("Not found\n");
    //         break;
    //     }
    // }

    // binary search
    int a[5] = {3,4,5,6,7};

    int key, low, hi, mid;
    printf("enter search key: ");
    scanf("%d", &key);
    
    low = 0;
    hi = 4;
    mid = (low+hi)/2;

    int flag = 0;

    while (low<=hi)
    {
       if(a[mid] < key) {
        low = mid + 1;
       } else if ( a[mid] > key) {
        hi = mid - 1;
       } else {
        flag =1;
        printf("Key is found at location %d\n", mid);
        break;
       }
        mid = (low+hi)/2;
    }

    if(flag==0){
    printf("Not found\n");

    }
     

    return 0;
}