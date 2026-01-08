/*Question 1 {E balguruswamy}
Given the values of the variables x,y and z. 
Write a program to rotate thier values such that x has the value of y, y has the value of z, and z has the value of x.*/

#include <stdio.h>

int main() {
    int x,y,z,temp;

    x=10,y=30,z=40;
    temp=x;
    x=y;
    y=z;
    z=temp;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}