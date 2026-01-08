#include <stdio.h>

void main() {
    int n,first,second,next_term,i;
    first = 0, second = 1;
    n = 10;

    for(i = 1; i<=n; i++) {
        next_term = first + second;
        printf(" %d", next_term);
        first = second;
        second = next_term;
    }
    printf("\n");
}