#include <stdio.h>

void main() {
    int i,j,k,rows;
    rows=5;

    for(i = 0; i<rows; i++) {
        for(j=0;j<2*(rows-i)-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++) {
            printf("%d ", k+1);
        }
        printf("\n");
    }
}