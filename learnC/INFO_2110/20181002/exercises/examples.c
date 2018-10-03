/*INFO 2110  Week 4 class code setup
   Name
   Program description:  
   1.  Write the program sequence to do the following
		Print the numbers 1 to 20
		Print the even numbers 1 to 50
		Print the odd numbers 1 to 50
	2. Write the program sequence to do the following
		Calculate and print the sum of the numbers 1 to 50
		Calculate and print the sum of 15 numbers entered by the user
		Calculate and print the average of 20 numbers entered by the user
*/

//Libraries
//#include "pch.h"    //2017 C++
//#include <iostream> //2017 C++
#include <stdio.h>	//C

int main()
{
	//declare variables - reserve space in memory
	int n;      //runs the for loops
    int sum;    //holds the sum of the numbers generated
	int num;    //entered number from the user

    //initialize variables - assign numbers to the variables
	sum = 0;    //ALWAYS initialize iterative values at zero unless otherwise specified

	//calculation and print
	//Calculate and print the sum of the numbers 1 to 50
	printf("Calculate and print the sum of the numbers 1 to 50: \n\n");
	for(n=1;n<=50;++n)
		{
		sum = sum + n;
		}

	printf("Sum of all whole numbers between 1 and 50 = %i.\n\n",sum);
    
	//Calculate and print the sum of 15 numbers entered by the user
	printf("Calculate and print the sum of 15 numbers entered by the user:\n\n");
    sum = 0;
    for(n=1;n<=15;++n)
    {
        printf("%2i. Enter a number: ",n);
        scanf("%i",&num);
        sum = sum + num;
    }
    printf("Sum of the entered numbers: %i\n",sum);

	//Calculate and print the average of 20 numbers entered by the user
	printf("Calculate and print the average of 20 numbers entered by the user:\n\n");
    sum = 0;

    for(n=1;n<=20;++n)
    {
        printf("%2i. Enter a number: ",n);
        scanf("%i", &num);
        sum = sum + num;
    }
    
    printf("\n average = %g\n\n", sum/20.0);

	//output - print the results to the screen
    //Print the numbers 1 to 20
	
    printf("Print the numbers 1 to 20\n");
	
    for(n=1;n<=20;++n)
    {
        printf("%i, ",n);
    }
    printf("\n\n");

	//Print the even numbers 1 to 50
	printf("Print the even numbers 1 to 50:\n");
    for(n=2;n<=50;n=n+2)
    {
        printf("%i, ",n);
    }
    printf("\n\n");
	
	//Print the odd numbers 1 to 50
	printf("Print the odd numbers 1 to 50: \n");
    for(n=1;n<=50;n=n+2)
    {
        printf("%i, ",n);
    }
    printf("\n\n");
    
    //Print the multiples of 5 up to 100
    printf("Print the multiples of 5 up to 100:\n\n");
    printf("Option 1:\n");

    for(n=0;n<=100;n=n+5)
    {
        printf("%i, ",n);
    }
    printf("\n\n");

    printf("Option 2:\n");

    for(n=0;n<=20;++n)
    {
        printf("%i, ",5*n);
    }
    printf("\n\n");
    
    printf("Option 3:\n");

    for(n=100;n>=0;n=n-5)
    {
        printf("%i, ",n);
    }
    printf("\n\n");

    printf("Option 4:\n");
    
    for(n=0;n<=100;++n)
    {
        if(n%5==0)
            printf("%i, ",n);
    }
    printf("\n\n");
    
    return 0;
}
