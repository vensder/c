#include<stdio.h>

void main()
{
    int a, b, x=10, y=10;

    a = x++;
    b = ++y;

    printf("a = %d, x = %d \n", a, x);
    printf("b = %d, y = %d \n", b, y);
}
