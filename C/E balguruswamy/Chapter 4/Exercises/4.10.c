/*Question 10
Write a program to read and display the following table of data.
Name            Code            Price
Fan             67831           1234.50
Motor           450             5786.70
The name and code must be left-justified and price must be right-justified.*/

#include <stdio.h>

struct data {
    char name[20];
    int code;
    float price;
};

int main() {
    struct data d1 = {"Fan",67831,1234.50};
    struct data d2 = {"Motor",450,5786.70};

    printf("%-15s %-10s %10s\n","Name","Code","Price");

    printf("%-15s %-10d %10.2f\n", d1.name, d1.code, d1.price);
    printf("%-15s %-10d %10.2f\n", d2.name, d2.code, d2.price);

    return 0;
}