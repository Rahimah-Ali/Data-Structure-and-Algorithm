#include <stdio.h>

int heap[100];
int n;

void heapp(int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;

    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i)
    {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        heapp(largest);
    }
}

void deleteElement(int value)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (heap[i] == value)
            break;
    }
    if (i == n)
    {
        printf("Element not found!\n");
        return;
    }
    heap[i] = heap[n - 1];
    n--;
    if (i > 0 && heap[i] > heap[(i - 1) / 2])
    {
        while (i > 0 && heap[i] > heap[(i - 1) / 2])
        {
            int temp = heap[i];
            heap[i] = heap[(i - 1) / 2];
            heap[(i - 1) / 2] = temp;
            i = (i - 1) / 2;
        }
    }
    else
    {
        heapp(i);
    }
}

int main()
{
    int value;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &heap[i]);
    }
    printf("\nEnter the number to delete: ");
    scanf("%d", &value);
    deleteElement(value);
    printf("Heap after deletion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", heap[i]);

    return 0;
}
