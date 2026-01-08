#include <stdio.h>

void main() {
    int size = 5;
    for (int i=1;i<=size;i++) {
        for (int j=1;j<=size;j++) {
            if (i==1||j==1||i==size||j==size) {
                printf("*\t");
            } else {
                printf("  \t");
            }
        }
        printf("\n\n");
    }
}
