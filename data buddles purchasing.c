/*
Name:Alex
Reg:PA106/G/29040/25
Description:A program to compute data buddles purchasing
*/


#include<stdio.h>

int main()
{
int choices;


//Display menu
printf("100MB @ 50");
printf("500MB @ 200");
printf("1GB @ 350");
printf("2GB @600");

printf("Enter your choice (1_4)");
scanf("%d",choices);

//switch statement to handle selection
switch(choices){case 1:
printf("you selected 100MB.cost=50");
break;
case 2:
printf("you selected 500MB.cost=200");
break;
case 3:
printf("you selected 1GB.cost=350");
break;
case 4:
printf(" you selected 2GB.cost=600");
break;
default:
printf("invalid choice select choice (1-4)");
}
    return 0;
}