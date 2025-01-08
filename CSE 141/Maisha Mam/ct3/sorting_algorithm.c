#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int ara[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

// algorithm part starting 

    // selection sort
    // for(int i = 0; i < n - 1; i++) {
    //     int minIndex = i;
    //     for(int j = i + 1; j < n; j++) {
    //         if(ara[j] < ara[minIndex]) {
    //             minIndex = j;
    //         }
    //     }
    //     if(minIndex != i) {
    //         int tmp = ara[i];
    //         ara[i] = ara[minIndex];
    //         ara[minIndex] = tmp;
    //     }
    // }

    // bubble sort
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n;j++){
    //         if(ara[j]>ara[j+1]){
    //             int tmp = ara[j];
    //             ara[j] = ara[j+1];
    //             ara[j+1]=tmp;
    //         }
    //     }
    // }

    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int key = ara[i];
        int j = i - 1;
        while (j >= 0 && ara[j] > key)
        {
            ara[j + 1] = ara[j];
            j--;
        }

        ara[j + 1] = key;
    }

// algorithm part ending 

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    return 0;
}
