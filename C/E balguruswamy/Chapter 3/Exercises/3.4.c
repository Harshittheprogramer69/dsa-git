/*Question 4
Write a program that will obtain the length and width of a rectangle from the user adn compute its area and perimeter.*/

#include <stdio.h>

int main() {
    float length, width;
    float area, perimeter;
    printf("Enter length of rectangle:- ");
    scanf("%f", &length);
    printf("Enter width of rectangle:- ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length+width);
    printf("Area = %.4f\n", area);
    printf("Perimeter = %.4f\n", perimeter);
    return 0;
}