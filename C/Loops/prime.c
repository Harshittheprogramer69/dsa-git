#include <stdio.h>

void main() {
    int divisor,number,is_prime;
    is_prime=1;

    printf("Enter a number: ");
    scanf("%d",&number);

    if (number<=1) {
        is_prime=0;
    } else {
        for (divisor=2;divisor*divisor<=number;divisor++) {
            if (number%divisor==0) {
                is_prime=0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is prime number",number);
    } else {
        printf("%d is not prime number",number);
    }
}