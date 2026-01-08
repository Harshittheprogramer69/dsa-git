#include <stdio.h>
#include <math.h>

void range(int x, double *min, double *max) {
    *min = -pow(2, x - 1);
    *max = pow(2, x - 1) - 1;
}

int main() {
    int num;
    double min, max;
    printf("Enter number of bits: ");
    scanf("%d", &num);
    range(num, &min, &max);
    printf("Min range is %.0f and Max range is %.0f\n", min, max);
    return 0;
}
