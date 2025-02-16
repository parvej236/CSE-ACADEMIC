#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *word)
{
    int left = 0, right = strlen(word) - 1;
    while (left < right)
    {
        if (word[left] != word[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main()
{
    char str[100], word[100];
    int i = 0, j = 0, count = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (isalnum(str[i]))
        {
            word[j++] = str[i];
        }
        else if (j > 0)
        {
            word[j] = '\0';
            if (isPalindrome(word))
            {
                printf("%s\n", word);
                count++;
            }
            j = 0;
        }
        i++;
    }

    if (j > 0)
    {
        word[j] = '\0';
        if (isPalindrome(word))
        {
            printf("%s\n", word);
            count++;
        }
    }

    printf("\nCount: %d\n", count);
    return 0;
}
