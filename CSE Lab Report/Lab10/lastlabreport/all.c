#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[50], temp[100];

    strcpy(str1, "Hello, ");
    printf("str1 after strcpy: %s\n", str1);

    strncpy(str2, "World! This is a test.", 6);
    str2[6] = '\0';
    printf("str2 after strncpy: %s\n", str2);

    int result = strcmp(str1, str2);
    printf("Comparison of str1 and str2 using strcmp: %d\n", result);

    result = strncmp(str1, "Hello", 5);
    printf("Comparison of first 5 characters of str1 and 'Hello' using strncmp: %d\n", result);

    strcpy(temp, "This is a simple string example.");
    char *substring = strstr(temp, "simple");
    if (substring) {
        printf("Substring 'simple' found at position: %ld\n", substring - temp);
    } else {
        printf("Substring 'simple' not found.\n");
    }

    strcat(str1, str2);
    printf("str1 after strcat: %s\n", str1);

    strncpy(str3, " Let's concatenate!", 10);
    str3[10] = '\0';
    strncat(str1, str3, 8);
    printf("str1 after strncat: %s\n", str1);

    return 0;
}
