
/*
Makayla Riley
Professor Poppe
CSC-251
3/8/2020
*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define SIZE 30

void printer(int arr[SIZE]);
void randomFill(int randArr[SIZE]);
void sorter(int sortArr[SIZE]);

int main(void)
{
	int array[SIZE] = {0}; //This sets the array elements to zero
	puts("Array before");
	printer(array);

	//Array after insert
	randomFill(array);
	printer(array);

	//Array after sort
	sorter(array);
	printer(array);


	return EXIT_SUCCESS;
}



/*
This function will display the
conents of an array
*/
void printer(int arr[SIZE])
{
	int i = 0; //control for loop variable

	for(i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d\n", i, arr[i]);
	}

}


/*
This function fills the elements of the array
with random numbers between 55 and 205
*/
void randomFill(int randArr[SIZE])
{
	srand(time(NULL));
	int i = 0;

	puts("\nArray after insert");

	for(i = 0; i < SIZE; i++)
	{
		int x = (rand() % (205 - 55 + 1)) + 55;
		randArr[i] = x;


	}


}




/*
This function sorts an array
into ascending order
*/
void sorter(int sortArr[SIZE])
{
	int i = 0;
	int j = 0;

	puts("\nArray after sort");
	for(i = 0; i < SIZE; i++)
	{

		for(j = 0; j < SIZE; j++)
		{


			if(sortArr[i] < sortArr[j]) //If the number before is less than the number that comes after
			{
				int a = sortArr[i]; //temp variable
				sortArr[i] = sortArr[j];
				sortArr[j] = a;
			}

		}


	}



}
