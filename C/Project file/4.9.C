/*P4.9 Program to understand the sizeof operator*/
#include <stdio.h>
#include <conio.h>

void main() {
    int var;
    clrscr();

    printf("Size of int = %d\n" ,sizeof (int));
    printf("Size of float = %d\n",sizeof(float));
    printf("Sizeofvar = %d\n",sizeof(var));
    printf("Size of an integer constant = %d\n",sizeof(45));
    
    getch();
}