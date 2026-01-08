/*Question 9
In inventory management, the Economic Order Quality for a single item is given
                    ____________________________________
                   /   2 X demand rate X setup costs
            EOQ = /-------------------------------------
                 v Holding cost per item per unit time 
and the optimal Time Between Orders
                    ___________________________________________________
                   /                 2 X setup costs                    
            TOB = /--------------------------------------------------
                 v demand rate X holding cost per item per unit time
Write a program to compute EOQ and TBO, given demand rate(items per unit time), setup costs(per order), and the holding cost(per item per unit time.)*/

#include <stdio.h>
#include <math.h>

int main() {
    float EOQ, TOB;
    int demand_rate, setup_costs, holding_costs;

    printf("Enter demand rate:- ");
    scanf("%d", &demand_rate);
    printf("Enter setup costs:- ");
    scanf("%d", &setup_costs);
    printf("Enter holding costs:- ");
    scanf("%d", &holding_costs);

    EOQ = sqrt((2*demand_rate*setup_costs)/holding_costs);
    TOB = sqrt((2*setup_costs)/(demand_rate*holding_costs));

    printf("Economic order quality = %f\n", EOQ);
    printf("Time beteween orders = %f", TOB);

    return 0;
}