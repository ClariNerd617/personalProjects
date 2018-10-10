#include <stdio.h>

int main()
{
    int count = 0, number = 9, sum = 0, done;

    do
    {
        do
        {   //get user input
            printf("Enter a positive number: ");
            scanf("%i", &number);

            if (number < 0 || number > 100)
            {
                printf("Invalid entry... Try again\n");
            }
        
        }while (number < 0 || number > 100);
        
        sum = sum + number;
        ++count;
        
        printf("Finished? 1 = Yes   0 = No: ");
        scanf("%i", &done);

    }while (done != 1);


    //print the sum and average of the numbers

    printf("Sum = %i\n", sum);
    printf("Average = %.2f\n", sum*1.0 / count);

    return 0;
}
