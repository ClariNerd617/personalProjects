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

	
// Libraries
#include <stdio.h>    //C
// Global Variables
int a,b,c,r;
float pi = 3.14159;
// Using the gcc 7.3.0 compiler


void PartA(void)
{
    /* Write a program that asks the user to enter two whole numbers, and prints the sum, product, difference, quotient and remainder of the two numbers. */

    //Declare the variables
    int s,d,p,q,m;
	
    //Prompt User for Input

    printf("Enter an integer: ");
    scanf("%i",&a);
    printf("Enter another integer: ");
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
    printf("The Modulus of %i and %i is: %i.\n\n",a,b,m);

}

void PartB(void)
{
    /* Part A and write a program that gets three different whole numbers 
    from the user, then prints the sum, the average, the product of 
    these numbers.*/
	
    // Declare Variables (m is mean)
    int s,m,p;
    
    // Prompt user for input
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

    printf("The Sum of %i, %i, and %i is %i.\n",a,b,c,s);
    printf("The Mean of %i, %i, and %i is %i.\n",a,b,c,m);
    printf("The Product of %i, %i, and %i is %i.\n\n",a,b,c,p);


}

void PartC(void)
{
    /* Part A & B and write a program that reads in the radius of a circle and prints the circle's diameter, circumference and area.  Use the constant value 3.14159 for Pi. All calculations should occur outside the printf statement(s) and use the formatted conversion %.2f for float variables. */
    
    // Prompt the user for the radius of the circle.
    float circ,area;
    int d;
    printf("Enter the radius of the circle: ");
    scanf("%i",&r);

    // Calculations and Display the Results
   
    
    d = 2*r;
    printf("The diameter of the circle is %i.\n",d);

    circ = 2 * pi * r;
    printf("The circumference of the circle is %f.\n",circ);

    area = pi * (r * r);
    printf("The Area of the circle is %f.\n",area);
	
}

void PartD(void)
{
    /* Part A, B, & C and write a program that calculates the student average based on the following where the user enters 3 values, the program adds the values up and then displays the student average  dividing the sum by 10.  */

    // Get the values for the variables
    
    int A,B,C,G;
    printf("Enter the grades here: ");
    scanf("%i",&A); scanf("%i",&B); scanf("%i",&C);
    
    // Calculations
    
    G = (A + B + C) / 10;

    // Display the results
    
    printf("The Student Average is: %i.\n",G);
}

int main(void)
{
    PartA();
    PartB();
    PartC();
    PartD();
	
    return 0;
}
