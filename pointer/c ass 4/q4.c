#include <stdio.h>

void main()
{
    int x = 89;

    int *p1, *p2, *p3;

    p1 = p2 = p3 = &x;

    printf("X = %d\n", *p1);

    *p3 = 100;

    printf("X = %d\n", *p1);
}