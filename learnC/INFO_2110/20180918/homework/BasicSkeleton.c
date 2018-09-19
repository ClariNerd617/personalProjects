/***************************************************************************
 *  Name:      
 *  Date:
 *  Project Description:
 *
 ***************************************************************************/
 
 //Libraries
 //#include "stdafx.h"	//C++ Library
 #include <stdio.h>		//C Library
 
 //Functions
 


/**************************************************************************/

void PartA(void)
{
	//execution begins in the main()

	//Declare the variables
	int a,b,s,d,p,q,m;

	// Prompt the user for variables a and b
	printf("Enter an integer: ");
	scanf("%i",&a);
	printf("Enter another interger: ");
	scanf("%i",&b);
	
	// Calculations

	s = a + b;
	d = a - b;
	p = a * b;
	q = a / b;
	m = a % b;

	// display the results
	printf("The Sum of %i and %i is: %i.\n",a,b,s);
	printf("The Difference between %i and %i is: %i.\n",a,b,d);
	printf("The Product of %i and %i is: %i.\n",a,b,p);
	printf("The Quotient of %i and %i is: %i.\n",a,b,q);
	printf("The Modulus of %i and %i is: %i.\n",a,b,m);
}

void PartB(void)
{

}

void PartC(void)
{

}

void PartD(void)
{

}

int main(void)
{
	PartA();
	PartB();
	PartC();
	PartD();

	return 0;	//indicates program completion
}