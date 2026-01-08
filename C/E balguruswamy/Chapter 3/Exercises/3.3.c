/*Question 3 
Modify the previous program to display the two right most digits of the integral part of the number.*/

#include <stdio.h>

int main() {
    float number;
    int new_number, right_two_digits;
    printf("Enter vaule for number:- ");
    scanf("%f", &number);
    new_number = (int)number; 
    right_two_digits = new_number % 100; 
    printf("Right Two digits = %d", right_two_digits);
    return 0;
}