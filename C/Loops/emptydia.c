#include <stdio.h>

void main() {
    int n = 5;
    for (int i = 0; i < 2*n-1; i++) {
        int row = (i < n) ? i : 2*n - i - 2;       
        for (int j = 0; j < n - row - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2*row + 1; k++) {
            if (k == 0 || k == 2*row) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
