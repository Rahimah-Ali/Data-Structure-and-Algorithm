


#include <stdio.h>

int main()
{
    int low = 1, high = 64;
    int target = 64;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int value = mid * mid;

        if (value == target)
        {
            printf("Root = %d\n", mid);
            return 0;
        }
        else if (value < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("No integer root found.\n");

    return 0;
}
