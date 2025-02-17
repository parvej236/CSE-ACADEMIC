#include <stdio.h>

// A dangling else problem occurs when there are nested if statements
// without proper braces ({}),
// leading to ambiguity about which if the else belongs to.

int main()
{
    int x = 2, y = 10;

    if (x > 5)
    {
        if (y > 5)
            printf("Both x and y are greater than 5\n");
    }
    else
    {
        printf("x is not greater than 5\n"); // This else belongs to (y > 5), not (x > 5)
    }

    return 0;
}
