#include<stdio.h>

void insertionSort(int arr[], int n) {
   for (int i = 1; i < n; i++) {
        int key = arr[i]; // Element to be placed in the correct position
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[]={9,2,7,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: \n");
    printArray(arr, n);

    insertionSort(arr, n);
    printf("Sorted Array: \n");
    printArray(arr, n); 

    return 0;    
}