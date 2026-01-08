#include <stdio.h>

int main() {
    int positive = 0 , negative = 0;
    float n;
    while (1) {
        printf("Enter the number (positive / negative) {and enter 0 to end}:- ");
        scanf("%f", &n);
        if (n>0) {
            positive++;
        } else if (n<0) {
            negative++;
        } else {
            break;
        }
    }
    printf("Total positive numbers = %d\n", positive);
    printf("Total Negative numbers = %d", negative);

    return 0;
}