/*Question 16
The cost of one type of mobile service is RS. 250 plus RS. 1.25 for each call made over and above 100 calls.
Write a program to read customer codes and call made and print the bill for each customer.*/

#include <stdio.h>

int main() {
    float bill, total_calls, extra_calls, final_bill;
    char code[10];

    bill = 250, final_bill = 0;

    printf("Enter your number: ");
    scanf("%s", &code);
    printf("Enter Total number of calls: ");
    scanf("%f", &total_calls);

    if (total_calls > 100) {
        extra_calls = total_calls - 100;
        final_bill += bill + (extra_calls*1.25);
    } else {
        final_bill += bill;
    }

    printf("Bill for code %s is %f", code, final_bill);

    return 0;
}