#include <stdio.h>

int main()
{
    
    //declare variables
    int count=0, number = 9, sum = 0;

    while (number > 0)
    {
        //get user input
        printf("Enter a positive number: ");
        scanf("%i", &number);
    
        if (number > 0) //if a positive number, add to sum
        {
            sum = sum + number;
            ++count;
        }
    
    }
    
    //print the sum and average of the numbers
    printf("Sum = %i\n",sum);
    printf("Average = %.2f\n", sum*1.0 / count);    

    return 0;
}
