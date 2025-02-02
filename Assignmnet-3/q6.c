// Design a program to find the difference between two sets or arrays. The difference between two sets
//  or arrays: All the elements of the first array that don’t appear in the second array. If array p has
// the elements 1, 2, 3, 4 and array q has the elements 2, 4, 5, 6 , then the difference between the
// two arrays, p-q will be 1, 3 .
#include <stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("difference of two set are:");
    for (int i = 0; i < size1; i++)
    {
        int c = 0;
        for (int j = 0; j < size2; j++)
        {

            if (arr1[i] == arr2[j])
            {
                c++;
            }
        }
        if (c == 0)
        {
            printf("%d    ", arr1[i]);
        }
    }

    return 0;
}