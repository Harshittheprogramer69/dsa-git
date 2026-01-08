/*P4.2 Program to ul)derstand the floating point arithmetic operaltion */
#include <stdio.h>
#include <conio.h>

void main() {
    float a,b;
    clrscr();

    a=12.4,b=3.8;

    printf("Sum = %.2f\n" , a +b);
    printf("Difference = %.2f\n", a-b);
    printf("Product = %.2f\n" , a *b);
    printf("a/b=%.2f\n",a/b);
    
    getch();
}