#include <stdio.h>

int main() {
    int i,j;
    char ch;
    for (i=1;i<=5;i++) {
        ch='A';
        for (j=1;j<=i;j++) {
            if (i%2 != 0) {
                printf("%d", i);
            } else {
                printf("%c", ch);
            }
            ch++;
        }
        printf("\n");
    }
    return 0;
}