#include <stdio.h>

int main()
{

    int number_to_test, remainder;

    printf("Enter your number to be tested: \n");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
    {
        printf("the remainder was %i.\n",remainder);
        printf("the number is even.\n");
    }
    else
    {
        printf("the remainder was %i.\n",remainder);
        printf("the number is odd.\n");
    }

    return 0;

}
