/*Question 19
Write a program that determines whether a given integer is odd or even and displays the number and description on the same line.*/

#include <stdio.h>

int oddeven(int x);

int oddeven(int x) {
    if (x % 2 != 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int num;

    printf("Enter number:- ");
    scanf("%d", &num);

    if (oddeven(num) == 1) {
        printf("%d is Even", num);
    } else {
        printf("%d is Odd", num);
    }

    return 0;
}