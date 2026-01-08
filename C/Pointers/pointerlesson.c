#include <stdio.h>

void main() 
{
    int b = 5;
    int *q = &b;
    *q += 10;

    printf("%d",b);
}