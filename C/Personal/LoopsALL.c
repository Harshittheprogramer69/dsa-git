#include <stdio.h>

int main() {
    int option;
    printf("Which loop you want to use\n 1.FOR\n 2.WHILE\n 3.DO WHILE\n");
    scanf("%d", &option);
    if (option == 1) {
        for (int i = 1; i <= 5; i +=1){
            printf("%d", i);
        }
    }
    else if (option == 2) {

    }
}