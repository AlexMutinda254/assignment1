/*
Name:Mutinda Alex
Reg:PA106/G/29040/25
Description:A  c program to compute number guessing 
*/

#include<stdio.h>
#include<string.h>

int main()
{
char password[20];
do{
printf("Enter the password");
scanf("%s",password);}
while (strcmp(password,"1,2,3,4")!=0);
    printf("access granded");
    return 0;
    }