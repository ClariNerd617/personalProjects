#include <stdio.h>
#include <stdlib.h> //required to use rand()
#include <time.h>   //required to use srand(time(NULL))

/* function declaration */ 

/* function returning the max between two numbers */
int max(int num1, int num2)
{ 
    /* local variable declaration */
    int result;

    if (num1 > num2) 
        result = num1;
    else result = num2;

    return result;
} 

int User_Input_Integer(void)
{
    int integer;
	    
    printf("Enter an integer: ");
	scanf("%i", &integer);

	return(integer);
}

float User_Input_Decimal(void)
{
	float decimal;
	printf("Enter an integer: ");
	scanf("%f", &decimal);

	return(decimal);
}

int _tmain1(int argc, int argv[])
{
	int number;
	float money;

	number = User_Input_Integer();
	money = User_Input_Decimal();

	return 0;
}

int User_Input_Integer2(int min, int max)
{//this function validates input to be between min and max

    int integer;

	do
	{
	    printf("Enter an integer: ");
		scanf("%i", &integer);
	
		if(integer < min || integer > max)
		    printf("Invalid Entry, Try again.\n");
	}while(integer < min || integer > max);
     
	return(integer);
}

float User_Input_Decimal2(int min, int max)
{//this function validates input to be between min and max
    float decimal;

	do
	{
		printf("Enter a decimal: ");
		scanf("%f", &decimal);
	
		if(decimal < min || decimal > max)
		    printf("Invalid Entry.  Try again\n");
	}while(decimal < min || decimal > max);

	return(decimal);
}

int _tmain2(int argc, int argv[])
{
	int number;
	float money;

	number = User_Input_Integer2(1, 10);
	money = User_Input_Decimal2(0, 100);

	return 0;
}

int main ()
{
        /* local variable definition */
        int a = 100;
        int b = 200;
        int ret;

        /* calling a function to get max value */ 
        ret = max(a, b); 
        printf( "Max value is : %d\n", ret ); 

        return 0;
}