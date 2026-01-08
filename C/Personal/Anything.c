#include <stdio.h>
#include <string.h>

int main() {
    char array[50];
    int i,j,len;
    printf("Enter the number:- ");
    scanf("%s", array);
    len = strlen(array);
    for(i=0;i<len;i++) {
        for(j=i;j<len;j++) {
            printf("%c", array[i]);
        }
        printf("\n");
    }
    return 0;
}