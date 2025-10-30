/*
Name:Alex mutinda
Reg:PA106/G/29040/25
Description:A program to take room occupation
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];   // 5 floors, 10 rooms per floor
    int floor, room;
    int occupiedCount, vacantCount;

    // Input simulated occupancy data
    printf("Enter occupancy data for each floor (1 = occupied, 0 = vacant):\n");

    for (floor = 0; floor < 5; floor++) {
        printf("\nFloor %d:\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Display number of occupied and vacant rooms per floor
    printf("\n--- Room Occupancy Report ---\n");
    for (floor = 0; floor < 5; floor++) {
        occupiedCount = 0;
        vacantCount = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupiedCount++;
            else
                vacantCount++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupiedCount, vacantCount);
    }

    return 0;
}