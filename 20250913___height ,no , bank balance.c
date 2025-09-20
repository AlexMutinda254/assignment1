/*
Name:Alex
Reg number:PA106/G/29040/25
Description: prompting the user 
*/

#include<stdio.h>

int main()
{
  int height ;
  int ID_number;
  int bank_balance;
  
  //height input 
     printf("What is your height in cm: \n");
     scanf("%d",&height);
     printf("My height is %d",height);
     printf("cm tall\n");


  // ID number input 
       printf("What is your ID number: \n"); 
       scanf("%d",& ID_number);
       printf("My ID number is %d\n",ID_number);


  // bank balance input 
       printf("What is your bank balance : \n");
       scanf("%d", & bank_balance);
       printf("My bank balance is %d", bank_balance);
       printf("Kenyan shillings");
       
       return 0;
}     
