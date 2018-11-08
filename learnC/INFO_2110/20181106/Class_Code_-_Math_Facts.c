// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// MathFacts.cpp : Defines the entry point for the console application.
//
//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Globals*/
#define MAX 10
#define MIN 1

void Menu(void)
{	//prints the Menu options
	//input: none
	//returned value: none

	printf( "MENU\n");
	printf("1: Addition\n");
	printf("2: Subtraction\n");
	printf("3: Multiplication\n");
	printf("4: Division\n");
	printf("5 - Quit\n\n");
}

//generates a psuedo-random integer between min and max 
int Randint(int min, int max)
{
	int num;

	num = (min + rand()) % max;
	return(num);
}

/****************************************************************/

void Addition(void)
{	//print and check 5 addition equations
	//input: none
	//output: none

	int first, second, sum, guess;

	for (int n = 1; n <= 5; ++n)
	{
		//get equation numbers
		first = Randint(MIN, MAX);
		second = Randint(MIN, MAX);
		sum = first + second;

		//print the equation and get user's guess
		printf("%i.  What is %i + %i?  ", n, first, second);
		scanf_s("%i", &guess);

		//check user's 1st guess
		if (guess != sum)
		{
			printf("Sorry that is not correct.  Try again\n");

			//print the equation and get user's guess (2nd try)
			printf("%i.  What is %i + %i?  ", n, first, second);
			scanf_s("%i", &guess);

			//check user's guess
			if (guess != sum)
			{
				printf("Sorry that is not correct.  %i + %i = %i\n", first, second, sum);
			}
			else  //2nd guess is correct
				printf("Good job!\n");
		}
		else   //1st guess is correct
		{
			printf("Awesome!\n\n");
		}
	}

}
void Subtraction(void)
{	//print and check 5 subtraction equations
	//input: none
	//output: none

	int first, second, difference, guess;

	for (int n = 1; n <= 5; ++n)
	{
		//get equation numbers
		first = Randint(MIN, MAX);
		second = Randint(MIN, MAX);
		difference = first - second;

		//print the equation and get user's guess
		printf("%i.  What is %i - %i?  ", n, first, second);
		scanf_s("%i", &guess);

		//check user's 1st guess
		if (guess != difference)
		{
			printf("Sorry that is not correct.  Try again\n");

			//print the equation and get user's guess (2nd try)
			printf("%i.  What is %i - %i?  ", n, first, second);
			scanf_s("%i", &guess);

			//check user's guess
			if (guess != difference)
			{
				printf("Sorry that is not correct.  %i - %i = %i\n", first, second, difference);
			}
			else  //2nd guess is correct
				printf("Good job!\n");
		}
		else   //1st guess is correct
		{
			printf("Awesome!\n\n");
		}
	}





}
void Multiplication(void)
{
	int first, second, product, guess;

	for (int n = 1; n <= 5; ++n)
	{
		//get equation numbers
		first = Randint(MIN, MAX);
		second = Randint(MIN, MAX);
		product = first * second;

		//print the equation and get user's guess
		printf("%i.  What is %i * %i?  ", n, first, second);
		scanf_s("%i", &guess);

		//check user's 1st guess
		if (guess != product)
		{
			printf("Sorry that is not correct.  Try again\n");

			//print the equation and get user's guess (2nd try)
			printf("%i.  What is %i * %i?  ", n, first, second);
			scanf_s("%i", &guess);

			//check user's guess
			if (guess != product)
			{
				printf("Sorry that is not correct.  %i * %i = %i\n", first, second, product);
			}
			else  //2nd guess is correct
				printf("Good job!\n");
		}
		else   //1st guess is correct
		{
			printf("Awesome!\n\n");
		}
	}


}
void Division(void)
{	//print and check 5 integer division equations
	//input: none
	//output: none
	int first, second, quotient, remainder, guessQ, guessR;

	for (int n = 1; n <= 5; ++n)
	{
		//get equation numbers
		first = Randint(MIN, MAX);
		second = Randint(MIN, MAX);
		quotient = first / second;
		remainder = first % second;

		//print the equation and get user's guess
		printf("%i.  What is %i / %i?  ", n, first, second);
		printf("Quotient: ");
		scanf_s("%i", &guessQ);

		printf("Remainder: ");
		scanf_s("%i", &guessR);

		//check user's 1st guess
		if (guessQ != quotient && guessR != remainder)  //quotient and remainder are wrong
		{
			printf("Sorry that is not correct.  Try again\n");

			//print the equation and get user's guess (2nd try)
			//print the equation and get user's guess
			printf("%i.  What is %i / %i?  ", n, first, second);
			printf("Quotient: ");
			scanf_s("%i", &guessQ);

			printf("Remainder: ");
			scanf_s("%i", &guessR);

			//check user's guess
			if (guessQ != quotient && guessR != remainder)  //quotient and remainder are wrong
			{
				printf("Sorry that is not correct.  %i / %i = %i R %i\n", first, second, quotient, remainder);
			}
			
		}
		else   //quotient or remainder are correct
		{
			if (guessQ == quotient) //check if quotient is correct
			{
				if (guessR == remainder)   //check if remainder is correct		
					printf("Awesome!\n");
				else
				{
					printf("Your remainder is not correct.  Try again\n");
					printf("Remainder: ");
					scanf_s("%i", &guessR);

					if (guessR == remainder)
						printf("Great work!\n");
					else
						printf("Sorry that is not correct.  %i / %i = %i R %i\n", first, second, quotient, remainder);
				}
			}
			else
			{
				//quotient is not correct
				printf("Quotient: ");
				scanf_s("%i", &guessQ);

				if (guessQ == quotient) //check if quotient is correct
				{
					printf("Awesome!\n");
				}
				else
				{
					printf("Sorry that is not correct.  %i / %i = %i R %i\n", first, second, quotient, remainder);
				}
			}
		}
	}


}
void Quit(void)
{
	printf("Don't forget to practice on your own between sessions!\n");
}

void Exercises(int c)
{	//redirects the code based on the user's input
	//input: user's choice
	//returned value: none
	switch (c)
	{
	case 1: Addition(); break;
	case 2: Subtraction();  break;
	case 3: Multiplication();  break;
	case 4: Division();  break;
	default:  Quit();  break;
	};
}
void main(void)
{
	//variables
	int num1, choice;

	do {
		printf("Welcome to Super Math 3000. Please do not ask what happened to the previous 2999.\n");
		//printf("Please enter the minimum value: ");
		//scanf("%i", &MIN);

		//printf("Please enter the maximum value: ");
		//scanf("%i", &MAX);

		//srand((unsigned)time(NULL));
		Menu();
		printf("Enter your choice: ");
		scanf_s("%i", &choice);
		Exercises(choice);
	} while (choice > 0 && choice < 5);
	printf("Good Bye\n");
}
    
