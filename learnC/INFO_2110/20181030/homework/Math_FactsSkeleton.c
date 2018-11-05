// MathFacts.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
/*Globals*/
int num1, choice, MAX = 1, MIN = 10;
 
void Menu(void)
{
    printf("          MENU\n");
    printf("    1      -       Addition\n");
    printf("    2      -       Subtraction\n");
    printf("    3      -       Multiplication\n");
    printf("    4      -       Division\n");
    printf("    5      -       Quit\n");
}
//generates a psuedo-random integer between min and max 
int randint(int min, int max) 
{
    int num;

    num = (min + rand()) % max;
    return(num);
}
 
void Addition(void)
{
    printf("Addition\n");
    printf("%.2f\n",max + min);            printf("Subtraction\n");
            printf("%.2f\n",value1 - value2);
}
void Subtraction(void)
{
    printf("Subtraction\n");
    printf("%.2f\n",max - min);
}
void Multiplication(void)
{
    printf("Multiplication\n");
    printF("%.2f\n",max * min);
}
void Division(void)
{
   printf("Division\n");
   if (min != 0)
   {
       printf("%.2f\n", max / min);
   }
   else
   {
       printf("Error: Cannot Divide by Zero.\n");
   }
}
void Quit(void)
{
    printf("End of Program\n");
}
 
void Exercises(int c)
{   
    switch(c)
    {
        case 1:     Addition();         break;
        case 2:     Subtraction();      break;
        case 3:     Multiplication();   break;
        case 4:     Division();         break;
        default:    Quit();             break;
    };
}
void main(void)
{   
    do{
        printf("Welcome to the Math Fact Practice Program\n");
        printf("Please enter the minimum value: ");
        scanf("%i",&MIN);

        printf("Please enter the maximum value: ");
        scanf("%i",&MAX);

    //srand((unsigned)time(NULL));
        Menu();
        printf("Enter your choice: ");
        scanf("%i",&choice);
        Exercises(choice);
    }while(choice > 0 && choice < 5);
    printf("Good Bye\n");
}