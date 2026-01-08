#include <stdio.h>
#include <math.h>

void main() {
    int original, num, digit, sum, digits, temp;
    sum = 0;
    digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    do {
        digits++;
        temp /= 10;
    } while (temp!=0);

    do {
        digit = num%10;
        sum += (int)(pow(digit, digits)+0.5);
        num /= 10;
    } while (num!=0);

    if (original == sum) {
        printf("Number is Armstrong.");
    } else {
        printf("Number is not armstrong.");
    }
}