#include <stdio.h>

void printMaxFrequency(int arr[], int n) {
    if (n <= 0) {
        printf("Array is empty.\n");
        return;
    }

    int max = arr[0];
    int frequency = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            frequency = 1;
        } else if (arr[i] == max) {
            frequency++;
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Frequency of maximum number: %d\n", frequency);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < -10000 || arr[i] > 10000) {
            printf("Number out of range! Please enter numbers in the range [-10000, 10000].\n");
            return 1;
        }
    }
    printMaxFrequency(arr, n);

    return 0;
}
