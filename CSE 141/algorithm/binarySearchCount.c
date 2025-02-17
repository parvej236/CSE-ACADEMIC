#include <stdio.h>

int main() {
    int n, key, found = 0;
    
    // Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int ara[n];
    
    // Input elements into the array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    // Input the key to search for
    printf("Enter the number to count: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;

    // Binary search to find one occurrence of the key
    while (low <= high) {
        mid = (high + low) / 2;
        if (ara[mid] == key) {
            printf("Found at index: %d\n", mid + 1);
            found = 1;
            break; // Exit loop when found
        } else if (key > ara[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If the key was found, count its occurrences
    if (found) {
        int count = 1; // Start with one occurrence found

        // Count occurrences to the left
        for (int i = mid - 1; i >= 0 && ara[i] == key; i--) {
            count++;
        }

        // Count occurrences to the right
        for (int i = mid + 1; i < n && ara[i] == key; i++) {
            count++;
        }

        printf("The number %d occurs %d times in the array.\n", key, count);
    } else {
        printf("The number %d is not found in the array.\n", key);
    }


    return 0;
}
