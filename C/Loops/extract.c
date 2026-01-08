#include <stdio.h>

void main() {
    int num,original,digit;
    int digits[20],count, i;
    count=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    original = num;

    while(num!=0) {
        digit = num%10;
        digits[count] = digit;
        count++;
        num /= 10;
    }

    printf("Original number is %d\n", original);

    printf("Right to left: \n");
    for(i=0;i<count;i++) {
        printf("%d\n", digits[i]);
    }
    printf("Left to right: \n");
    for(i=count-1;i>=0;i--) {
        printf("%d\n", digits[i]);
    }
}