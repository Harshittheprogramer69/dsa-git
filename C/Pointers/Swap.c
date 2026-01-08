#include <stdio.h>

void swap(int x, int y);

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main () {
    int a = 9;
    int b = 2;
    swap(a,b);

    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}