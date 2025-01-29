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
    // time complexity
    // best case: O(1), worst case: O(n), average case: O(n)
    // space complexity: O(1)

    // for(int i=0; i<n;i++){
    //     if(ara[i]==key){
    //         printf("find %d in %d index.\n", key, i);
    //         found=1;
    //     }
    // }

    // binary search
    // time complexity
    // best case: O(1), worst case: O(log n), average case: O(log n)
    // space complexity: O(1)

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (ara[mid] == key)
        {
            printf("find in index: %d\n", mid+1);
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
        printf("-1\n");
    }

    return 0;
}
