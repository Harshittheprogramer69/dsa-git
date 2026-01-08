/*Question 15
Write a program to read three values using scanf statement and print the following results:
(a) Sum of the Values.
(b) Average of the Values.
(c) Largest of the Three.
(d) Smallest of the Three.*/

#include <stdio.h>

int main() {
    float sum,average,largest,smallest;
    float a,b,c;

    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);

    sum = a+b+c;
    average = (sum)/3;
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("Sum = %f\n", sum);
    printf("Average = %f\n", average);
    printf("Largest = %f\n", largest);
    printf("Smallest = %f\n", smallest);
    
    return 0;
}