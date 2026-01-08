/*Question 4
Write a program that reads 4 floating point values in the range, 0.0 to 20.0, and prints a horizontal bar chart to represent these values using the character * as the fill character. For the purpose of the chart, the values may be rounded off to the nearset integer. For example the value of 4.36 should be represented as:
*   *   *   *  
*   *   *   *
*   *   *   *   4.36
*   *   *   *   */

#include <stdio.h>
#include <math.h>

void main() {
    float values[4];
    int rounded[4];
    
    printf("Enter 4 floating point number: ");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &values[i]);
        if (values[i] < 0.0) values[i] = 0.0;
        if (values[i] > 20.0) values[i] = 20.0;
        rounded[i] = (int) round(values[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < rounded[i]; j++) {
            printf("* ");
        }
        printf("%.2f\n", values[i]);
    }
}