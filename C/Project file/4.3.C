/*P4.3 Program to understand the use of prefix increment/decrement*/
#include <stdio.h>
#include <conio.h>

void main() {
    int x;
    clrscr();

    x=8;

    printf("x = %d\t",x);
    printf("x = %d\t",++x); //prefix increment
    printf("x = %d\t",x);
    printf("x = %d\t",--x); //prefix decrement
    printf("x = %d\t",x);

    getch();
}