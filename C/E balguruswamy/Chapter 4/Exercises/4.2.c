/*Question 2
Write a program to read the values of x and y and print the results of the following expressions in one line:
     x+y           x+y
(a) -----    (b) -------   (c) (x+y)(x-y)
     x-y            2                          
*/

#include <stdio.h>

int main() {
    float x,y;

    printf("Enter value of x and y (format x,y): ");
    scanf("%f,%f",&x,&y);

    printf("(a) %.4f\n", ((x+y)/(x-y)));
    printf("(b) %.4f\n", ((x+y)/2));
    printf("(c) %.4f\n", ((x+y)*(x-y)));

    return 0;
}