#include <stdio.h>

const char* evenodd(int x)
{
    if (x%2==0) {
        return "Even";
    } else {
        return "Odd";
    }
}

void main() {
    int num;
    scanf("%d",&num);
    printf("%s", evenodd(num));
}