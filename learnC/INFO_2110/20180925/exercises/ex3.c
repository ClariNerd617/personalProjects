#include <stdio.h>

int main(void)
{
    float value1 = 10, value2 = 9;
 //   char operator;

/*    printf("Enter your values");
    scanf("%f\n",&value1);
    scanf("%f\n",&value2);
*/
    // using switch
    int choice;

    // print menu
    printf("          MENU\n");
    printf("    1      -       Addition\n");
    printf("    2      -       Subtraction\n");
    printf("    3      -       Multiplicatoin\n");
    printf("    4      -       Division\n");
    printf("    5      -       Quit\n");

    // get menu choice
    printf("Enter your menu choice: ");
    scanf("%i",&choice);

    // redirect using switch statement
    switch (choice)
    {
        case 1:
            printf("Addition\n");
            printf("%.2f\n",value1 + value2);
            break;
        case 2:
            printf("Subtraction\n");
            printf("%.2f\n",value1 - value2);
            break;
        case 3:
            printf("Multiplication\n");
            printf("%.2f\n",value1 * value2);
            break;
        case 4:
            printf("Division\n");
            if (value2 != 0)
            {
                printf("%.2f\n",value1 / value2);
            }
            else
            {
                printf("Error: Cannot Divide by Zero.\n");
            }
            break;
        default:
            printf("End of program\n");

    }   // end of switch
}