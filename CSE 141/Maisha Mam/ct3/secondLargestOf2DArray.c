#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows and colums: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0], secondLargest = -214783648;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                secondLargest = largest;
                largest = arr[i][j];
            } else if (arr[i][j] > secondLargest && arr[i][j] != largest) {
                secondLargest = arr[i][j];
            }
        }
    }
    
    if (secondLargest == 0 && largest != 0) {
        printf("No second largest element.\n");
    } else {
        printf("Second largest element is: %d\n", secondLargest);
    }

    return 0;
}
