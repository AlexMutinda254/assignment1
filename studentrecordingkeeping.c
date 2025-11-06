#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    struct Student s;
    FILE *fp;

    // Open the binary file for reading
    fp = fopen("results.dat", "rb");

    // If file doesn't exist, display message and exit gracefully
    if (fp == NULL) {
        printf("No records found. The file 'results.dat' does not exist yet.\n");
        printf("Please run the data entry program first to create it.\n");
        return 0; // not an error, just no data
    }

    printf("\n==== STUDENT RESULTS ====\n");
    printf("------------------------------\n");

    // Read and display each record
    int recordCount = 0;
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Registration No: %s\n", s.regNo);
        printf("Total Marks: %.2f\n", s.totalMarks);
        printf("------------------------------\n");
        recordCount++;
    }

    if (recordCount == 0) {
        printf("No records found in the file.\n");
    }

    fclose(fp);
    return 0;
}