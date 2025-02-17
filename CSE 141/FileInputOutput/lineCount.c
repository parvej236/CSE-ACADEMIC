#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    int count = 0;
    char ch;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    fclose(file);
    printf("Total number of lines: %d\n", count+1);

    return 0;
}
