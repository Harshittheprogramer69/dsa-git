#include <stdio.h>

int main() {
    char arr[][10] = {"Harshit", "Pratham", "Nishant", "Anushk", "Tanisha"};
    int rows = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", arr[i][j]);
       }
        printf("\n");
    }
    return 0;
}
