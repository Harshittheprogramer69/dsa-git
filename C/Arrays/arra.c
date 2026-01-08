#include <stdio.h>

#define MAX 9999

void main() {
    int arr[MAX];
    int array_elements,array_element;
    int i;

    printf("Enter how many elements you want to add: ");
    scanf("%d",&array_elements);

    for(i=0; i<array_elements ;i++) {
        printf("Enter element: ");
        scanf("%d",&array_element);

        arr[i] = array_element;
    }

    printf("{");
    for(i=0; i<array_elements;i++) {
        printf("%d",arr[i]);
        if (i<array_elements-1) {
            printf(",");
        }
    }
    printf("}\n");
}