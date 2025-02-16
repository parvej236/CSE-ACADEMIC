#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(ara[j]>ara[j+1]){
                int tmp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1]=tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    return 0;
}
