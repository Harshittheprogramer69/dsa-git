#include <stdio.h>

void main() {
    int i,j,space,n;
    n = 5;
    
    for(i=n;i>=1;i--) {
        for(space=1;space<=n-i;space++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    for (i=2; i<=n; i++) {
        for(space=1;space<=n-i;space++) {
            printf(" ");
        }
        for(j = 1; j<=2*i-1; j++) {
            printf("%d",j);
        }
        printf("\n");
    } 
}