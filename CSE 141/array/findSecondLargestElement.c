#include <stdio.h>
#define N 5

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int ara[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    int largest = ara[0];
    int sLargest = -1;

    for (int i = 1; i < n; i++) {
        if (ara[i] > largest) {
            sLargest = largest;
            largest = ara[i];
        } else if (ara[i] > sLargest && ara[i] != largest) {
            sLargest = ara[i];
        }
    }

    if (sLargest == -1) {
        printf("There is no second largest element.\n");
    } else {
        printf("Largest: %d\n", largest);
        printf("Second Largest: %d\n", sLargest);
    }

    return 0;
}
