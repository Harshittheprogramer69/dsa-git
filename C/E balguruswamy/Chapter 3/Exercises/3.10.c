/*Question 10
For a certain electrical circuit with an inductance L and resistance R, the damped natural frequency is given by
                      ______________________
                     /  1             R2
        Frequency = / -----    -    ------
                   v   LC             4C2
It is desired to study the variation of this frequency with C (Capacitance). Write a program to calculate the frequency for different values of C from starting from 0.01 to 0.1 in steps of 0.01.*/

#include <stdio.h>
#include <math.h>

int main() {
    float R, L, C, Frequency, inside_sqrt;

    L = 1.0, R = 0.1;
    printf("Frequency\t\tC\n");
    printf("----------------------------\n");

    for (C = 0.01; C <= 0.10; C += 0.01) {
        inside_sqrt = (1 / (L * C)) - ((R * R) / (4 * C * C));

        if (inside_sqrt >= 0) {
            Frequency = sqrt(inside_sqrt);
            printf("%.4f\t\t%.2f\n", Frequency, C);
        } else {
            printf("Undefined (imag)\t%.2f\n", C);
        }
    }
    
    return 0;
}