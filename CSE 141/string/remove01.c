#include <stdio.h>
#include <string.h>

void remove_substring(char *str) {
    int len = strlen(str);
    int i, j;

    while(1) {
        int found = 0;
        for(i = 0; i < len - 1; i++) {
            if(str[i] == '0' && str[i + 1] == '1') {
                // Remove "01" by shifting characters to the left
                for(j = i; j < len - 1; j++) {
                    str[j] = str[j + 2]; // Shift characters after "01"
                }
                str[len - 2] = '\0'; // Reduce string size
                found = 1;
                break;
            }
        }
        if (!found) {
            break; // Exit if "01" is no longer found
        }
    }
}

int main() {
    char str[100];

    scanf("%s", str);
    remove_substring(str);

    printf("%s\n", str);

    return 0;
}
