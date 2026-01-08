#include <stdio.h>

int main() {
    printf("Total marks is 50.\n");
    int marks;
    printf("Enter marks of student:- ");
    scanf("%d", &marks);
    if (marks > 50) {
        printf("Not possible\n");
    }
    else if (marks <= 50) {
        if (marks > 30) {
            printf("Pass\n");
        }
        else {
            printf("Fail\n");
        }
    }
    else if (marks < 0) {
        printf("Negative marking\n");
    }
    else {
        printf("Error");
    }
    return 0;
}