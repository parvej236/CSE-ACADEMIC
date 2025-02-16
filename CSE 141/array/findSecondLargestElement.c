#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int ara[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    int largest = INT_MIN, sLargest = INT_MIN;
     
    for (int i = 0; i < n; i++) {
        if (ara[i] > largest) {
            sLargest = largest;
            largest = ara[i];
        } else if (ara[i] > sLargest && ara[i] != largest) {
            sLargest = ara[i];
        }
    }
     
    if (sLargest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("Largest: %d\n", largest);
        printf("Second Largest: %d\n", sLargest);
    }

    return 0;
}
