/*Question 12
Write a program to print the size of various data types in C.*/

#include <stdio.h>

int main() {
    const char* typeNames[] = {"char","int","long","long int","float","double","long double"};
    size_t typeSizes[] = {sizeof(char), sizeof(int), sizeof(long), sizeof(long int), sizeof(float), sizeof(double), sizeof(long double)};
    
    int n = sizeof(typeSizes) / sizeof(typeSizes[0]);

    for (int i = 0; i < n; i++) {
        printf("%d. %s: %zu bytes\n", i+1, typeNames[i], typeSizes[i]);
    }
    return 0;
}