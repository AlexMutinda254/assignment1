/*
Name:Alex mutinda
Reg:PA106/G/29040/25
Description:A program to compute a week revenue tracker in a hotel
*/

#include <stdio.h>

int main() {
    float revenue[7];     
    float total = 0.0, average;
    int i;

    printf("Enter the revenue for each day of the week:\n");

    // Input daily revenues
    for(i = 0; i < 7; i++) {
        printf("Day %d revenue: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];   
    }

    
    average = total / 7;

    
    printf("\n--- Weekly Revenue Report ---\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: %.2f\n", i + 1, revenue[i]);
    }

    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}