/***************************************************************************
 *  Name: Henry Goodwin
 *  Date: 
 *  Project Description: In Class Exercises: Variables
 *
 ***************************************************************************/
 
 //Libraries
 //#include "stdafx.h"  //C++ Library
 #include <stdio.h>	    //C Library
 #define pi 3.141592654 //circle constant
 //Functions



/**************************************************************************/

int main(void)
{
	//execution begins in the main()

	//define variables
	const int max=30; //MAX

	printf("Hello World\n");
	printf("PI = %g\n ", pi);
	printf("MAX = %i\n", max);
	
	//declare/initialize variables
	int integerVar=100;
	float floatingVar=331.79;
	double doubleVar=8.44e+11;
	char charVar='W';
	_Bool boolVar=0;

	//print variables
	printf("integerVar = %i\n",integerVar);
	printf("floatingVar = %f\n",floatingVar);
	printf("doubleVar = %e\n",doubleVar);
	printf("doubleVar = %g\n",doubleVar);
	printf("charVar = %c\n",charVar);
	
	printf("boolVar = %i\n",boolVar);

	
	return 0;	//indicates program completion
}