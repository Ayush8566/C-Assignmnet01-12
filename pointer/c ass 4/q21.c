#include <stdio.h>

void arrange(int *a, int *b);

void arrange(int *a, int *b)
{
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

void main()
{
    int n1, n2, n3;

    printf("Enter SIX numbers separated by blanks> ");
    scanf("%d %d %d",&n1,&n2,&n3);

    arrange(&n1, &n2);
    arrange(&n1, &n3);
    
    arrange(&n2, &n3);
  

    

    printf("The numbers in ascending order are: %d %d %d \n", n1, n2, n3);
}
