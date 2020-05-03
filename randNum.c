/*
Makayla Riley
Professor Poppe
CSC-251
2/25/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{

//	srand(time(NULL));

	int x;
	int num;

	for(x = 1; x <= 10; x++) {

		num = (rand() % 6) + 1;
		printf("%d\n", num);

	}

}
