#include<stdio.h>

int main() {
    char NAME = 'h'; // single data store {single quotes}
    char name[] = "Harshit"; // Full name string store {double quotes}
    int age = 18; // integer store
    float pi = 3.14; // pi store
    char new[10];
    

    printf("First letter is %c\n", NAME);
    printf("Name is %s\n", name);
    printf("Age is %d\n", age);
    printf("Pi is %.2f\n", pi);
    printf("Harshit input:- ");
    scanf("%s", &new);
    return 0;
}