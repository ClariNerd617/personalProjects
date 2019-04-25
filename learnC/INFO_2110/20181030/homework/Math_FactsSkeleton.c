// MathFacts.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Globals*/
int num1, choice, min = 1, max = 10;

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
    return (num);
}

void Addition(void)
{
    printf("Addition\n");
    printf("The sum of %i and %i is %i\n\n", max, min, max + min);
}
void Subtraction(void)
{
    printf("Subtraction\n");
    printf("The difference between %i and %i is %i\n\n", max, min, max - min);
}
void Multiplication(void)
{
    printf("Multiplication\n");
    printf("The product of %i and %i is %i\n\n", max, min, max * min);
}
void Division(void)
{
    printf("Division\n");
    if (min != 0)
    {
        printf("The quotient of %i divided by %i is %i with a remainder of %i\n\n", max, min, max / min, max % min);
    }
    else
    {
        printf("Error: Cannot Divide by Zero.\n\n");
    }
}
void Quit(void)
{
    printf("End of Program\n");
}

void Exercises(int c)
{
    switch (c)
    {
    case 1:
        Addition();
        break;
    case 2:
        Subtraction();
        break;
    case 3:
        Multiplication();
        break;
    case 4:
        Division();
        break;
    default:
        Quit();
        break;
    };
}
void main(void)
{
    printf("Please enter the minimum value: ");
    scanf("%i", &min);

    printf("Please enter the maximum value: ");
    scanf("%i", &max);

    do
    {
        printf("Welcome to the Math Fact Practice Program\n");
        Menu();
        printf("Enter your choice: ");
        scanf("%i", &choice);

        //srand((unsigned)time(NULL));
        Exercises(choice);
    } while (choice > 0 && choice < 5);
    printf("Good Bye\n");
}