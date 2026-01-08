#include <stdio.h>

void main() {
    int original,num,digit,reverse;
    reverse = 0;

    printf("Enter a number to check palindrome: ");
    scanf("%d",&num);

    original = num;

    do {
        digit = num%10;
        reverse = reverse*10 + digit;
        num /= 10;
    } while(num!=0);

    if (original == reverse) {
        printf("number is palindrome.");
    } else {
        printf("Number is not palindrome.");
    }
}