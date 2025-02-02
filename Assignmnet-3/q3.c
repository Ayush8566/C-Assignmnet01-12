#include <stdio.h>
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    { // Number of passes
        for (int j = 0; j < size - i - 1; j++)
        { // Compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements if they are out of order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    // Example array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    displayArray(arr, size);
    printf("\n");

    // Call bubble sort
    bubbleSort(arr, size);

    // Print the sorted array
    printf("Sorted array: ");
    displayArray(arr, size);
    return 0;
}
