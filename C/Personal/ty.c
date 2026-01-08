#include <stdio.h>
#include <conio.h>

void main() {
    int first,second;

    scanf("%d %d", &first, &second);

    printf("%d", (first>second) ? first : second);
    getch();
}