#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("word.txt", "r");

    int count = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            count++;  // Space means we are outside a word
        }
    }

    fclose(file);
    printf("Number of words in 'word.txt': %d\n", count+1);
    return 0;
}
