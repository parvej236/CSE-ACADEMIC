#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i>=j){
                printf("%d ", n -j);
            } else {
                printf("%d ", n - i);
            }
        }

        printf("\n");
    }
}