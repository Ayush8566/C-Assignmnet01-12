#include <stdio.h>
int main()
{
    int arr[] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newArray[size];
    int k = 0;
    for (int i = 0; i < size; i++)
    { 
        int flag=1;
        for(int j=0;j<k;j++){
            if(arr[i]== newArray[j]){
                flag=0;
                break;
            }

        }
        if(flag){
        newArray[k++]=arr[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d  ",newArray[i]);
    }
    return 0;
}