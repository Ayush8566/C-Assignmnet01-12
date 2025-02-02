#include <stdio.h>
int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * fact(num - 1));
    }
}
int main()
{

    printf("enter the number to find the factorial: \n");
    int n;
    scanf("%d",&n);
    printf("the factorial of a given num %d is %d: \n", n, fact(n));
    return 0;
}