#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ara;   // Pointer for the dynamic array
    char ch;
    int i = 0, size = 1;

    // Allocate initial memory
    ara = (char *)malloc(size * sizeof(char));
    if (ara == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    while (1) {
        ch = getchar();  // Read a character
        if (ch == '\n')  // Stop on newline
            break;

        if (i == size) {
            size *= 2; // Double the memory size
            ara = (char *)realloc(ara, size * sizeof(char));
            if (ara == NULL) {
                printf("Memory reallocation failed\n");
                return 1;
            }
        }

        ara[i] = ch;
        i++;
    }

    ara[i] = '\0';
    printf("%s\n", ara);

    free(ara);
    return 0;
}
