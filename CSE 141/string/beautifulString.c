#include <stdio.h>
#include <string.h>

#define VOWELS "AEIOU"

int isVowel(char ch) {
    return strchr(VOWELS, ch) != NULL;  // Check if ch is in "AEIOU"
}

void makeBeautifulString(char str[]) {
    char result[100];  // To store vowels
    int removedCount = 0, j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            result[j++] = str[i];  // Store vowels
        } else {
            removedCount++;  // Count non-vowel characters
        }
    }

    result[j] = '\0';  // Null-terminate the string

    // Print output
    printf("Total removed = %d\n", removedCount);
    printf("Final string = %s\n", result);
}

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    makeBeautifulString(str);

    return 0;
}
