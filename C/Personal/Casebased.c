#include <stdio.h>

int main() {
    char ch;
    printf("Enter the Character to find upper and lower case");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is Uppercase", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is lowecase", ch);
    }
    else {
        printf("Invalid");
    }
    return 0;
}