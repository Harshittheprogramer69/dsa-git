/*Question 9
Write a program to read the name ANIL KUMAR GUPTA in three parts using the scanf statement and to display the same in the following format using the printf statement.
(a) ANIL K. GUPTA
(b) A.K. GUPTA
(c) GUPTA A.K.*/

#include <stdio.h>

void main() {
    char string[] = "ANIL KUMAR GUPTA";

    printf("a. %.4s %c %.5s\n", string, string[5], string+11);    
    printf("b. %c.%c. %.5s\n", string[0], string[5], string+11);
    printf("c. %.5s %c.%c\n", string+11, string[0], string[5]);    
}