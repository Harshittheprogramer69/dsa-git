/*P4.5 Program to understand the use of relational operators*/
#include <stdio.h>
#include <conio.h>

void main() {
    int a,b;
    clrscr();

    printf ("Enter values for a and b ") ;
    scanf("%d%d",&a,&b) ;
    if(a<b)
	    printf("%d is less than %d\n", a, b);
    if(a<=b)
	    printf("%d is less than or equal to %d\n", a,b);
    if (a==b)
	    printf("%d is equal to %d\n",a,b);
    if(a!=b)
	    printf("%d lS not equal to %d\n",a,b);
    if(a>b)
	    printf("%d is greater than %d\n",a,b);
    if (a>=b)
	    printf("%d is great than or equal to %d\n",a,b);
    getch();
}