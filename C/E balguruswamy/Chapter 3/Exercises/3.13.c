/*Question 13
Given three values, write a program to read three values from keyboard and print out the largest of them without using if statements.*/

#include <stdio.h>

int main() {
    int x,y,z,ans;
    
    printf("Enter first number:- ");
    scanf("%d",&x);
    printf("Enter second number:- ");
    scanf("%d",&y);
    printf("Enter third number:- ");
    scanf("%d",&z);

    ans = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);

    printf("The maximum number is %d", ans);
    return 0;
}