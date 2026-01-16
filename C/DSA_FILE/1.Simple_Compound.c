// Simple Interest Compound Interest
#include <stdio.h>
#include <math.h>

int main() {
    float principle,rate,time;
    float Simple_interest, Compound_interest;

    printf("Enter Principle: ");
    scanf("%f", &principle);
    
    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    Simple_interest = (principle*rate*time)/100;

    Compound_interest = principle * pow(1+rate/100,time);

    printf("Simple Interest: %f\n",Simple_interest);
    printf("Compound Interest: %f\n",Compound_interest);
    
    return 0;
}