#include <stdio.h>

void main() {
    int num, digit, sum, original;
    sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    do {
        digit = num % 10;
        sum += digit;
        num /= 10;
    } while (num != 0);

    printf("Sum of digits of %d is %d", original, sum);
}
