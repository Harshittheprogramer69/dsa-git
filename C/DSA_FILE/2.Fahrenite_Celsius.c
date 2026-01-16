#include <stdio.h>

int main() {

    int option;
    float Celsius,Fahrenite;

    printf("Enter What you want to do\n");
    printf("1.Celsius to Fahrenite\n2.Fahrenite to Celsius\n");
    
    scanf("%d",&option);

    if(option == 1) {
        printf("Enter Celsius: ");
        scanf("%f",&Celsius);
        Fahrenite = ((9.0*Celsius)/5.0) + 32.0;
        printf("%f Fahrenite is %f Celsius",Fahrenite,Celsius);
    } else {
        printf("Enter Fahrenite: ");
        scanf("%f",&Fahrenite);
        Celsius = (5.0*(Fahrenite - 32.0))/9.0;
        printf("%f Celsius is %f Fahrenite",Celsius,Fahrenite);

    }

    return 0;
}