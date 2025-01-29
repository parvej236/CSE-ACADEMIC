#include <stdio.h>
#include <string.h>

int main() {
    char str[200], oldWord[50], newWord[50], result[400];
    int i = 0, j = 0, k = 0, found = 0, oldWordLen, newWordLen;

    gets(str);
    str[strcspn(str, "\n")] = '\0';

    gets(oldWord);
    oldWord[strcspn(oldWord, "\n")] = '\0';

    gets(newWord);
    newWord[strcspn(newWord, "\n")] = '\0';

    oldWordLen = strlen(oldWord);
    newWordLen = strlen(newWord);

    while (str[i] != '\0') {
        // Check if the substring matches the old word
        if (strncmp(&str[i], oldWord, oldWordLen) == 0 &&
            (i == 0 || str[i - 1] == ' ') &&
            (str[i + oldWordLen] == ' ' || str[i + oldWordLen] == '\0')) {
            // Copy the new word into result
            strcpy(&result[j], newWord);
            j += newWordLen;
            i += oldWordLen;
            found = 1;
        } else {
            // Copy the current character into result
            result[j++] = str[i++];
        }
    }

    result[j] = '\0';

    if (found) {
        printf("Modified string: %s\n", result);
    } else {
        printf("Not found.\n");
    }

    return 0;
}
