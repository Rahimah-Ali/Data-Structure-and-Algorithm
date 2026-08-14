
#include <stdio.h>

#define MAX 100

int heap(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] > arr[largest])
        largest = left;

    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heap(arr, n, largest);
    }
}

int main() {
    int n;
    int arr[MAX];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = n / 2 - 1; i >= 0; i--)
        heap(arr, n, i);

    printf("Max Heap: ");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
