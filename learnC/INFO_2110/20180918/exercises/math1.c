#include <stdio.h>
//#define a 9
//#define b 7
int main(void)
{
    //declare variables
    int a,
        b,
        sum,
        difference,
        product,
        quotient,
        modulus;
    
    //User promt
    printf("Enter an integer "); //prompt the user
    scanf("%i", &a); //get info from the keyboard
    
    printf("Enter a second integer ");
    scanf("%i", &b);
    
    //calculations
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    modulus = a % b;

    //output
    /*printf("Sum is %i\n", sum);
    printf("Difference is %i\n", difference);
    printf("Product is %i\n", product);
    printf("Quotient is %i\n", quotient);
    printf("Modulus is %i\n", modulus);*/

    printf("%i + %i = %i\n",a,b,sum);
    printf("%i - %i = %i\n",a,b,difference);
    printf("%i * %i = %i\n",a,b,product);
    printf("%i / %i = %i\n",a,b,quotient);
    printf("%i %% %i = %i\n",a,b,modulus);
}