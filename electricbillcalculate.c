/*
Name:Alex
Reg:PA106/G/29040/25
Description:a program to compute electric bill
*/
#include <stdio.h>

// Function to calculate electricity bill
float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    float total = calculateElectricBill(units);
    printf("Total Electric Bill = KSh. %.2f\n", total);

    return 0;
}