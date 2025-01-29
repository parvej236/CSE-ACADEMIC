#include<stdio.h>

int main()
{
    char str[100];
    gets(str);

    int n = strlen(str);
    int flag = 1;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(str[j]>str[j+1])
            {
                char tmp = str[j];
                str[j] = str[j+1];
                str[j+1]=tmp;
            }
        }
    }

    printf("%s\n", str);
}
