#include <stdio.h>
#include <string.h>

int main() {
    char str[100], oldWord[100], newWord[100], temp[200];
    gets(str);
    gets(oldWord);
    gets(newWord);

    char *pos = strstr(str, oldWord);

    if (pos != NULL) {
        int index = pos - str;
        strncpy(temp, str, index);
        temp[index] = '\0';

        strcat(temp, newWord);

        strcat(temp, pos + strlen(oldWord));

        printf("Result: %s\n", temp);
    } else {
        printf("Word not found!\n");
    }

    return 0;
}
