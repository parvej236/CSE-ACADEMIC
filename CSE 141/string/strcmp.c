#include <stdio.h>
#include <string.h>

int main()
{

    char str1[40];
    char str2[40];

    gets(str1);
    gets(str2);

    // by function
    // int x = strcmp(str1, str2);

    // if (x == 0)
    // {
    //    printf("Not equal\n");
    // }
    // else if (x < 0)
    // {
    //    printf("str1 is smaller\n");
    // }
    // else
    // {
    //    printf("str1 is greater\n");
    // }

    // by menually
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
    {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    // strncmp
    int x;
    x = strncmp(str1, str2, 3);

    if (x == 0)
    {
        printf("Euqal\n");
    }
    else if (x < 0)
    {
        printf("Str1 substring less then str2\n");
    }
    else
    {
        printf("Str2 substring less then str1\n");
    }

    return 0;
}