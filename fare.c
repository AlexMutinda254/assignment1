/*
Name:Alex
Reg:PA106/G/29040/25
Description:A program to calculate amount of fare
*/

#include<stdio.h>
float fare(int distance,int rate);
int main()
{
float result;
result=fare(500,50);
printf("fare=%.2f",fare);

    return 0;
}
float fare(int distance,int rate){
float result;
result=500*50;
return distance*rate;

}

    