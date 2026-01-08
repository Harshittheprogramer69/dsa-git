/*Question 14
Write a program to read two integer values m and n and to decide and print whether m is a multiple of n.*/

#include <stdio.h>

int main() {
    int m,n;

    printf("Enter value of m:- ");
    scanf("%d", &m);
    printf("Enter value of n:- ");
    scanf("%d", &n);

    if (n % m == 0) {
        printf("Yes %d[m] is a multiple of %d[n]", m, n);
    } else {
        printf("NO %d[m] is not a multiple of %d[n]", m, n);
    }
    
    return 0;
}