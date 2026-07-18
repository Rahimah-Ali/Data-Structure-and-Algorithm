
#include <stdio.h>

int main()
{
    int arr[100], n, i, item;
    int low, high, mid;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &item);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == item)
        {
            found = 1;
            break;
        }
        else if (item < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found)
    {
        printf("Element found at position %d\n", mid + 1);
    }
    else
    {
        printf("Element not found.\n");
    }

    return 0;
}
