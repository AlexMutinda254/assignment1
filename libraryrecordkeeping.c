/*
Name:Alex mutinda
Reg:PA106/G/29040/25
Description:a program to keep book record in library
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    do {
        
        printf("Enter book title: ");
        fflush(stdin);
        fgets(title, sizeof(title), stdin);

        fprintf(file, "%s", title);

        
        printf("Book title successfully stored!\n");

        
        printf("Do you want to add another book? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // clear newline character from buffer

    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("\nAll titles have been recorded in borrowed_books.txt\n");

    return 0;
}