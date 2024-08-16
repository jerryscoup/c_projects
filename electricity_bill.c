#include <stdio.h>
int main() {
    int units_consumed;
    float cost_per_unit, total_bill;

    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units_consumed);

    
    if (units_consumed < 100) {
        cost_per_unit = 2.50;
    } else if (units_consumed >= 100 && units_consumed <= 250) {
        cost_per_unit = 4.00;
    } else {
        cost_per_unit = 5.00;
    }

    
    total_bill = units_consumed * cost_per_unit;

    
    printf("Electricity bill amount: Rs. %.2f\n", total_bill);

    return 0;
}
