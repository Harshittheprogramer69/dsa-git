#include <stdio.h>

int main() {

    int option;
    float Celsius,Fahrenheit;

    printf("Enter What you want to do\n");
    printf("1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n");
    
    scanf("%d",&option);

    if(option == 1) {
        printf("Enter Celsius: ");
        scanf("%f",&Celsius);
        Fahrenheit = ((9.0*Celsius)/5.0) + 32.0;
        printf("%f Fahrenheit is %f Celsius",Fahrenheit,Celsius);
    } else {
        printf("Enter Fahrenheit: ");
        scanf("%f",&Fahrenheit);
        Celsius = (5.0*(Fahrenheit - 32.0))/9.0;
        printf("%f Celsius is %f Fahrenheit",Celsius,Fahrenheit);

    }

    return 0;
}