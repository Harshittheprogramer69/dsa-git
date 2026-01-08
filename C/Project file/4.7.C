/*P4.7 Program to understand the use of comma operator*/
#include <stdio.h>
#include <conio.h>

void main() {
    int a,b,c,sum;
    clrscr();

    sum = (a=8,b=7,c=9,a+b+c);

    printf("Sum = %d\n",sum);
    getch();
}
