/*Question 1
Given the string "WORDPROCESSING", Write a program to read the string from the terminal and display the same in following formats:
(a) WORD PROCESSING
(b) WORD
    PROCESSING
(c) W.P.*/

#include <stdio.h>

void main() {
    char string[] = "WORDPROCESSING";

    printf("a. %.4s %.9s\n", string, string+5);
    printf("b. %.4s\n\t%.9s\n", string, string+5);
    printf("c. %c.%c.", string[0],string[4]);
}