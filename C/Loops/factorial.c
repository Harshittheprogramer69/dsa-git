#include <stdio.h>

void main() {
    int n, factorial, i;
    factorial = 1;

    printf("Enter a integer: ");
    scanf("%d",&n);

    if(n<0) {
        printf("Give a positive integer");
    } else {
        for(i=1; i<=n; i++) {
            factorial*=i;
        }
        printf("Factorial of %d is %d", n, factorial);
    }
}