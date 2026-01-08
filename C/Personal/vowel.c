#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    char strcheck[] = "aeiouAEIOU";
    int i,j,count;

    printf("Enter a string: ");
    scanf("%s",str);
    count = 0;
    
    for(i=0; str[i] != '\0'; i++) {
        for(j=0; j<=strlen(strcheck); j++) {
            if (str[i] == strcheck[j]) {
                count++;
                break;
            }
        }
    }

    printf("Total vowels = %d", count);
}