/*Question 2
Write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.*/

#include <stdio.h>

int main() {
    int i,sum,count;

    sum = 0;
    count = 0;

    printf("Numbers greater than 100 less than 200 and divisible by 7: \n");

    for(i=101;i<200;i++) {
        if(i%7==0) {
            printf("%d \n",i);
            sum+=i;
            count++;
        }
    }

    printf("Sum is %d\n",sum);
    printf("Total numbers are %d",count);
    return 0;
}