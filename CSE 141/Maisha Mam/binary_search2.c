#include<stdio.h>

int main() {
    int n, i, key, low, hi, mid;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter %d integers: ", n);

    for(i = 0; i<n; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter the key to find: ");
    scanf("%d", &key);

    low = 0;
    hi = n-1;
    mid = (low+hi)/2;

    while (low<=hi)
    {
       if(num[mid] < key) {
        low = mid + 1;
       } else if ( num[mid] > key) {
        hi = mid - 1;
       } else {
        printf("Key is found at location %d\n", mid);
        break;
       }
        mid = (low+hi)/2;
    }

    if(low > hi) {
        printf("Not found! %d isn't present in the list.n", key);
    }

    return 0;
    
}