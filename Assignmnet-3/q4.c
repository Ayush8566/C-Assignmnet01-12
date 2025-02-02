#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int size, int target) {
    int bottom = 0, top = size - 1;

    while (bottom <= top) {
        int middle = bottom + (top - bottom) / 2;

        if (arr[middle] == target) {
            return middle; // Target found, return index
        } else if (arr[middle] > target) {
            top = middle - 1; // Search in the left half
        } else {
            bottom = middle + 1; // Search in the right half
        }
    }

    return -1; // Target not found
}

int main() {
    // Example sorted array
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Call binary search
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found.\n", target);
    }

    return 0;
}
