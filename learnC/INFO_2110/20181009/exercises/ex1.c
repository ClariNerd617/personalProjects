#include <stdio.h>

int main()
{
    //declare variables
    int number, right_digit, sum = 0;
    int done = 1;

    while(done != 0)
    {   
        sum = 0;    //reset the sum

        //get user input
        printf("Enter your number: ");
        scanf("%i", &number);

        while(number != 0)
        {
            //Remove each digit one-by-one and add to the sum
            right_digit = number % 10;
            sum = sum + right_digit;
            number = number / 10;
        }
      
        //print the sum of the digits
        printf("the sum is %i\n", sum);

        printf("Again? Yes = 1  No = 0\n");
        scanf("%i", &done);
    }
    

    return 0;

}
