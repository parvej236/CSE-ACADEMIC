#include <stdio.h>

void deleteElement(int arr[], int *size, int position) {
    // Check if the position is valid
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    (*size)--;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Initial array
    int size = 5;  // Array size
    int position;

    // Print the original array
    printf("Original array: ");
    printArray(arr, size);

    // Ask the user for the position to delete
    printf("Enter the position (0-based index) to delete: ");
    scanf("%d", &position);

    // Call function to delete the element
    deleteElement(arr, &size, position);

    // Print the modified array
    printf("Array after deletion: ");
    printArray(arr, size);

    return 0;
}
