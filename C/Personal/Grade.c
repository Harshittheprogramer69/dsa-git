#include <stdio.h>

int main() {
    printf("Total marks <>==<> 100\n");
    int marks;
    printf("Enter Marks of student"); // input
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100){ // A+
        printf("Grade A+");
    }
    else if (marks >= 80 && marks < 90 ){ // A
        printf("Grade A");
    }
    else if (marks >= 70 && marks < 80){ // B
        printf("Grade B");
    }
    else if (marks >= 30 && marks < 70){ // c
        printf("Grade C");
    }
    else if (marks > 0 && marks < 30){ // fail
        printf("Fail");
    }
    else {
        printf("Invalid");
    }
    return 0;
}