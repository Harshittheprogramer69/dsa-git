/*P4.8 Program to interchange the value of two variables using comma operator*/
#include <stdio.h>
#include <conio.h>

void main() {
    int a,b,temp;
    clrscr();

    a=8, b=7;

    printf("a = %d, b = %d\n",a,b);
    temp=a, a=b, b=temp;
    printf("a = %d, b = %d\n",a,b);
    getch();
}
