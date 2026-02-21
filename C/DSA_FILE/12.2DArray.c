#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("- Enter element[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array: "); // in format of {{1,2},{3,4}}
    printf("{");
    for(int i = 0; i < rows; i++) {
        printf("{");
        for(int j = 0; j < cols; j++) {
            printf("%d", arr[i][j]);
            if(j < cols - 1) {
                printf(",");
            }
        }
        printf("}");
        if(i < rows - 1) {
            printf(",");
        }
    }
    printf("}");

    return 0;
}