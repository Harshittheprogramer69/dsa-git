/*Question 6
The straight line method of computing the yearly depreciation of the value of an item is given by:-
                Purchase price - Salvage value
Depreciation = ----------------------------------
                        Years of service
Write a program to determine the salvage value of an item when the purchase price, year of service, and the annual depreciation are given.*/

#include <stdio.h>

int main() {
    int purchase_price, salvage_value;
    int Depreciation, years_of_service;
    purchase_price = 20000;
    Depreciation = 1000;
    years_of_service = 10;
    salvage_value = purchase_price - (Depreciation * years_of_service);
    printf("Salvage value:- %d", salvage_value);
    return 0;
}