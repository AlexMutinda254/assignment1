/*
Name:Alex
Reg:PA106/G/29040/25
Description:A program to check student eligibility for final exam
*/

#include<stdio.h>

int main()
{
float attendance,avarange;

//input student attendance and avarange marks

printf("Enter attedance");
scanf("%f",&attendance);

printf("enter Avarange");
scanf("%f",&avarange);

//check elligibility
if (attendance>=75&&avarange>=40){printf(" Eligible for final exam./n");}


else{printf(" Not eligible./n");}
    return 0;
}