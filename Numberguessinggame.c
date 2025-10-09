/*
Name:Alex
Reg:PA106/G/29040/25
Description:number guessing game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
int number,guess;

//seed random number generator 
srand(time(0));
number=rand() % 20+1 ;// random number between 1 to 20

printf("welcome to number guessing game/n");
printf("I have picked a number between 1 to 20");

 // keep asking untill the player guess the correct number
do {(printf("Enter your guess/n"));
scanf("%d",guess);

if(guess>number){
printf("too high! try again");}

else if(guess>number){
printf("too low! try again");}

else (guess>number);
{printf("congratulations you have guessed the correct number");
}
} while (guess!=number);
        return 0;
    }