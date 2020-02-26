/*
Makayla Riley
Professor Poppe
1/29/20
Lab #2
*/

#include <stdio.h>

int main(void)
{

   int userNum; //Will be used for user input for choice of number

   int magicNumber = 7; //Determined magic number for user to guess

   printf("Enter a number between, and including, 1 through 10:");
   scanf("%d", &userNum);

   int addTotal = userNum + magicNumber; //Total when adding magicNumber and userNum
   int multTotal = userNum * magicNumber; //Total when mutliplying magicNumber and userNum
   int subTotal = userNum - magicNumber; //Total when subtracting magicNumber and userNum

   printf("%d + magic number = %d \n", userNum, addTotal);
   printf("%d + magic number = %d \n", userNum, multTotal);
   printf("%d + magic number = %d \n", userNum, subTotal);

   printf("What is your guess?");

   int userGuess;
   scanf("%d", &userGuess);

   printf("You are correct! You win!");

}
