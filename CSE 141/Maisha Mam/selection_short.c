#include<stdio.h>

int main() {

    int arr[3] = {3,1,5}; 


    for(int i = 0; i < 2; i++) {
        int min_idx = i;

        for(int j = i+1; j< 3; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    for(int i = 0; i < 3; i++) {
        printf("%d", arr[i]);
    }

}