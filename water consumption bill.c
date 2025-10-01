/*
Name:Alex
Reg:PA106/G/29040/25
Description:A program to computer Total bill of water used in units
*/

#include<stdio.h>

int main()
{
int units;
double bill;

//input akaunt of water used in units
printf("Enter units used");
scanf("%d",units);

if (units<=30){bill=units*20;}

else if (units<=60){bill=(units*20)+(30*25);}

else {bill=(units*20)+(30*25)+(60*30);}

printf("Total bill is %.2f,units");
    return 0;
}