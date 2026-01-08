#include <stdio.h>

int main() {
    char name[10];
    printf("Enter your name:-  "); // name
    scanf("%s", &name);

    char Gender;
    printf("Enter your Gender(m/f):-  "); // gender
    scanf(" %c", &Gender);

    int age;
    printf("Enter your age:- "); // age
    scanf("%d", &age);

    switch (Gender) { 
        case 'm' : // for male
            printf("Welcome Mr %s\n", name);
            break;
        case 'f' : // for female
            printf("Welcome Ms. %s\n", name);
            break;
        case 'M' : // for male
            printf("Welcome Mr %s\n", name);
            break;
        case 'F' : // for female
            printf("Welcome Ms. %s\n", name);
            break;
        default :
            printf("Welcome %s\n", name);
            break;
    }
    if (age < 13) { // for childern
        printf("You are a child\n");
        printf("You cannot vote\n");
    }
    else if (age >= 13 && age < 18) { // for teenager
        printf("You are a teenager\n");
        printf("You cannot vote\n");
    }
    else { // for adult
        printf("You are a Adult\n");
        printf("You can vote\n");
    }
    return 0;
}