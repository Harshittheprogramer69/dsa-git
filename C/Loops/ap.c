#include <stdio.h>

void main() {
    int i;
    int n;
    printf("Enter value for n:- ");
    scanf("%d",&n);
    for (i=1; i<=2*n-1;i+=2) {
        printf("%d ", i);
    }
}