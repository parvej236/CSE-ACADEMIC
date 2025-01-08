#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int ara[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Enter the search key: ");
    int key;
    scanf("%d", &key);
    int found = 0;

// algorithm part starting

    // linear search

    // for(int i=0; i<n;i++){
    //     if(ara[i]==key){
    //         printf("find %d in %d index.\n", key, i);
    //         found=1;
    //     }
    // }

    // binary search

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (ara[mid] == key)
        {
            printf("find in index: %d\n", mid);
            found=1;
            break;
        }
        else if (key > ara[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // algorithm part ending

    if (!found)
    {
        printf("Key not found\n");
    }

    return 0;
}
