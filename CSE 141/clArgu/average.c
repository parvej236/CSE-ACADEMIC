#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if at least one number is provided
    if (argc < 2) {
        printf("Please provide some integer numbers as arguments.\n");
        return 1;
    }

    int sum = 0;
    int count = argc - 1; // Number of integers provided (excluding the program name)

    // Loop through the command line arguments, convert them to integers, and add to sum
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]); // Convert string to integer and add to sum
    }

    // Calculate the average
    double average = (double)sum / count;

    // Print the average
    printf("The average of the given integers is: %.2lf\n", average);

    return 0;
}
