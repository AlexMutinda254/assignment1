    
Name:Alex mutinda
Reg:PA106/G/29040/25
Description:a program to show all branches room occupation
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[3][5][10];  // 3 branches, 5 floors, 10 rooms
    int totalOccupied = 0;

    srand(time(0)); // Seed for random number generation

    // Assign random occupancy (1 = occupied, 0 = vacant)
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                occupancy[branch][floor][room] = rand() % 2;
            }
        }
    }

    // Display occupancy for all branches
    printf("Room Occupancy (1 = occupied, 0 = vacant):\n\n");

    for (int branch = 0; branch < 3; branch++) {
        printf("=== Branch %d ===\n", branch + 1);

        for (int floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;

            printf("Floor %d: ", floor + 1);
            for (int room = 0; room < 10; room++) {
                printf("%d ", occupancy[branch][floor][room]);
                if (occupancy[branch][floor][room] == 1)
                    floorOccupied++;
            }
            printf(" -> Occupied: %d, Vacant: %d\n", floorOccupied, 10 - floorOccupied);
            totalOccupied += floorOccupied;
        }

        printf("\n");
    }

    // Display total summary across all branches
    printf("=====================================\n");
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);
    printf("Total number of vacant rooms: %d\n", (3 * 5 * 10) - totalOccupied);

    return 0;
}