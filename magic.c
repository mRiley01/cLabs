/*
Makayla Riley
Professor Poppe
CSC-251
2/26/2020
*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int main(void)
{

	int magicNumber, userNum;
	srand(time(NULL));

	puts("Enter a number between 1 and 10, inclusive");
	scanf("%d", &userNum);

	while(userNum < 1 || userNum > 10)
	{
		puts("Please enter a number that is not less than 1 and no greater than 10");
		scanf("%d", &userNum);
	}

	magicNumber = 1 + (rand() % 10);

	int addMagic = userNum + magicNumber;
	int multMagic = userNum * magicNumber;
	int subMagic = userNum - magicNumber;

	printf("%d + magic number = %d\n", userNum, addMagic);
	printf("%d * magic number = %d\n", userNum, multMagic);
	printf("%d - magic number = %d\n", userNum, subMagic);

	puts("What is your guess?");

	int guessNum;
	scanf(" %d", &guessNum);

	if(guessNum == magicNumber)
	{
		puts("You are correct! You win!");
	}
	else
	{
		puts("Sorry! Better luck next time!");
	}


	return EXIT_SUCCESS;

}
