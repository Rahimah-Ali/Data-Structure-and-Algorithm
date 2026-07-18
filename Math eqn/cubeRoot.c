

#include <stdio.h>

int main()
{
    int low = 0, high =64;
    int target = 64;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int value = mid * mid * mid;

        if (value == target)
        {
            printf("Cube root = %d\n", mid);
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

    printf("No integer cube root found.\n");

    return 0;
}
