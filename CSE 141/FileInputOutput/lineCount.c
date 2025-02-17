#include <stdio.h>
#include <stdlib.h>

int countLines(FILE *file) {
    int count = 0;
    char ch;
    
    // Read character by character from the file
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++; // Increment count when newline is encountered
        }
    }

    return count;
}

int main() {
    char filename[100];
    FILE *file;

    // Get the file name from the user
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Count the number of lines in the file
    int lineCount = countLines(file);

    // Close the file after reading
    fclose(file);

    // Output the total number of lines
    printf("Total number of lines: %d\n", lineCount);

    return 0;
}
