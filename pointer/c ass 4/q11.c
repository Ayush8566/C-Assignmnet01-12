#include <stdio.h>

void main()
{
    int arr[] = {120, 502, 118, 188, 106, 447};

    int *ptr = &arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}