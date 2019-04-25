//Math Facts
/********************************************************************************************
 *Name:
 *10/30/2018
 *Program Description:  Write a program to help your young child practice their math facts 
 *
 *********************************************************************************************/

//Functions

//Required Lbraries
#include <stdio.h>
#include <stdlib.h> //required to use rand()
#include <time.h>   //required to use srand(time(NULL))

int main(void)
{
	srand(time(NULL)); //required for randomness

	//variables
	int random_number;

	//generate a random number
	//random_number = rand() % range + initial value
	random_number = rand() % 10; //generate a number between 0 and 9

	printf("%i\n", random_number);

	return 0;
}
