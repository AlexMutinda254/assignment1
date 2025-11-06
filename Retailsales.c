/*
Name:Alex mutinda
Reg:PA106/G/29040/25
Description: a program to compute sales in a retail shop
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, totalSales = 0.0;
    int choice;

    // Step 1: Open the file for appending (creates it if it doesn't exist)
    fp = fopen("sales.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not create or open file 'sales.txt'\n");
        return 1;
    }

    printf("=== DAILY SALES RECORDING SYSTEM ===\n");

    // Step 2: Allow the user to enter sales amounts
    do {
        printf("Enter sales amount: ");
        scanf("%f", &amount);
        fprintf(fp, "%.2f\n", amount);

        printf("Add another record? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);

    // Step 3: Close file after writing
    fclose(fp);

    // Step 4: Reopen the file to calculate total sales
    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    // Step 5: Read all records and calculate total
    while (fscanf(fp, "%f", &amount) == 1) {
        totalSales += amount;
    }

    // Step 6: Display total sales
    printf("\n==============================\n");
    printf("Total Sales for the Day: %.2f\n", totalSales);
    printf("==============================\n");

    // Step 7: Close the file properly
    fclose(fp);

    return 0;
}