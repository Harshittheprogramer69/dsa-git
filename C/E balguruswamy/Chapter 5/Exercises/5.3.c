/*Question 3
A set of two linear equations with unknowns x1 and x2 is given below: 
        ax1 + bx2 = m
        cx1 + dx2 = n
The set has a unique solution
                md - bn
        x1 = --------------
                ad - cb

                na - mc
        x2 = --------------
                ad - cb

provided the denominator ad - cb is not equal to zero
Write a program that will read the values of constants a,b,c,d,m and n and compute the values of x1 and x2. An appropriate message should be printed if ad - cb = 0.*/

#include <stdio.h>

int main() {
    int a,b,c,d,m,n;
    float x1,x2;
    int temp,dump1,dump2;

    printf("EQUATIONS ARE:\nax1 + bx2 = m\ncx1 + dx2 = n\n");
    printf("Enter value of a,b,c,d,n,m{ACCORDINGLY enter to write new value}: ");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);

    temp = (a*d) - (c*b);
    if (temp == 0) {
        printf("The denomitor ended up as zero which gives us infinately many solutions aka not possible so it doesnt give us any answer.");
        return 1;     
    }

    dump1 = (m*d) - (b*n);
    dump2 = (n*a) - (m*c);

    x1 = (float)dump1/temp;
    x2 = (float)dump2/temp;

    printf("x1=%f\nx2=%f",x1,x2);
    return 0;   
}