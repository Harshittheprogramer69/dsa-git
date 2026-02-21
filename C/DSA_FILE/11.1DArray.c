#include <stdio.h>

int main() {
    int size;
    printf("Enter Size of array");
    scanf("%d",&size);

    int arr[size];

    printf("Enter array : ");
    for(int i = 0; i < size; i++) {
        printf("Enter element[%d]",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Array: "); // in format of {1,2,3,4} Example
    printf("{");
    for(int i = 0; i<size; i++) {
        printf("%d",arr[i]);
        if(i<size-1) {
            printf(",");
        }
    }
    printf("}");
    
    return 0;
}