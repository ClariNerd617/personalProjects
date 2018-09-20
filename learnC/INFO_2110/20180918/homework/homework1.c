/**************************************************************************************
Name: Henry Goodwin
INFO.2110
Graded Homework 1
Part A:(65 pts) 
	Write a program that asks the user to enter two whole numbers, 
	and prints the sum, product, difference, quotient and remainder 
	of the two numbers.  
	Your program is on-time.

Part B: (75 pts) 
    Part A and write a program that gets three different whole numbers 
	from the user, then prints the sum, the average, the product of 
	these numbers.  
	Your  program is on-time.
	
Part C: (85 pts) 
    Part A & B and write a program that reads in the radius of a circle 
	and prints the circle's diameter, circumference and area.  Use the 
	constant value 3.14159 for Pi.  All calculations should occur outside 
	the printf statement(s) and use the formatted conversion %.2f for float variables.  
	Your program is on-time.

Part D: (95 pts) 
	Part A, B, & C and write a program that calculates the student average based on 
	the following where the user enters 3 values, the program adds the values up and 
	then displays the student average  dividing the sum by 10.  
	Your program is on-time.

********************************************************************************************/

	
//libraries
#include <stdio.h>	//C
void PartA(void)
{
	/*	Write a program that asks the user to enter two whole numbers, 
	and prints the sum, product, difference, quotient and remainder 
	of the two numbers.   */

	//Declare the variables
	int a,b,s,d,p,q,m;

	// Prompt the user for variables a and b
	printf("Enter an integer: ");
	scanf("%i",&a);
	printf("Enter another interger: ");
	scanf("%i",&b);
	
	// Calculations

	s = a + b; //s is sum
	d = a - b; //d is difference
	p = a * b; //p is product
	q = a / b; //q is quotient
	m = a % b; //m is modulus

	// Display the results
	printf("The Sum of %i and %i is: %i.\n",a,b,s);
	printf("The Difference between %i and %i is: %i.\n",a,b,d);
	printf("The Product of %i and %i is: %i.\n",a,b,p);
	printf("The Quotient of %i and %i is: %i.\n",a,b,q);
	printf("The Modulus of %i and %i is: %i.\n",a,b,m);
}

void PartB(void)
{
	/* Part A and write a program that gets three different whole numbers 
	from the user, then prints the sum, the average, the product of 
	these numbers.   */
	
    // Declare Variables (m is mean)
    int a,b,c,s,m,p;

    // Prompt the user for a b and c
    printf("Enter an integer: ");
    scanf("%i",&a);
    printf("Enter another integer: ");
    scanf("%i",&b);
    printf("Enter another integer: ");
    scanf("%i",&c);

    // Calculations
    s = a + b + c;
    m = (a + b + c) / 3;
    p = a * b * c;

    // Display the Results

    printf("The Sum of %i, %i, and %i is %i.",a,b,c,s);
    printf("The Mean of %i, %i, and %i is %i.",a,b,c,m);
    printf("The Product of %i, %i, and %i is %i.",a,b,c,p);
}

void PartC(void)
{
	/*    Part A & B and write a program that reads in the radius of a circle 
	and prints the circle's diameter, circumference and area.  Use the 
	constant value 3.14159 for Pi.  All calculations should occur outside 
	the printf statement(s) and use the formatted conversion %.2f for float variables.  */
	
	
	
	
}

void PartD(void)
{
	/*	Part A, B, & C and write a program that calculates the student average based on 
	the following where the user enters 3 values, the program adds the values up and 
	then displays the student average  dividing the sum by 10.   */
	
	
	
	
}

int main(void)
{
	PartA();
	PartB();
	PartC();
	PartD();
	
	return 0;
}
