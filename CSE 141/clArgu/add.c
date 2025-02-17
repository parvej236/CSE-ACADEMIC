#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Please provide at least two numbers to add.\n");
        return 1;
    }

    // Convert command-line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Perform addition
    int sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
