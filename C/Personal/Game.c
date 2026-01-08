#include <stdio.h>
#include <conio.h>
#include <stdlib.h>   

int main() {
    int x = 10, y = 5;
    char ch;

    while(1) {
        system("cls");             
        for(int i=0; i<y; i++) printf("\n");
        for(int i=0; i<x; i++) printf(" ");
        printf("[]");              

        if(kbhit()) {              
            ch = getch();
            if(ch == 27) break;    
            if(ch == 0 || ch == 224) {  
                ch = getch();
                if(ch == 72) y--;       // up
                if(ch == 80) y++;       // down
                if(ch == 75) x--;       // left
                if(ch == 77) x++;       // right
            }
        }
    }
    return 0;
}
