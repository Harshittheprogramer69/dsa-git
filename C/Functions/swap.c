#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int First, Second;

    printf("Enter first numbers: ");
    scanf("%d",&First);
    printf("Enter second numbers: ");
    scanf("%d",&Second);
    
    printf("Before swapping\n");
    printf("First = %d\n", First);
    printf("Second = %d\n", Second);

    swap(&First,&Second);

    printf("After swapping:\n");
    printf("First = %d\n", First);
    printf("Second = %d\n", Second);

}
