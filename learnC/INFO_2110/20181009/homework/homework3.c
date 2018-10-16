#include <stdio.h>

int main()
{
    //using switch
    int choice;

    //print menu
    printf("    MENU\n");
    printf("    1   -   Gas Mileage\n");
    printf("    2   -   Sales Comission\n");
    printf("    3   -   Grade Calculation\n");
    printf("    4   -   Quit\n");

    //get menu choice
    printf("Enter your choice: ");
    scanf("%i",&choice);

    //redirect using switch statment
    switch (choice)
    {
        case 1:
            int miles, gallons, mpg, meanMileage;

            //input values
            printf("You chose Gas Mileage");
            printf("Enter the number of miles you drove: ");
            scanf("%i",&miles);
            printf("Enter the number of gallons you used: ");
            scanf("%i",&gallons);
            printf("The mpg for this tank was: ");
            scanf("%i",&mpg);

            

            break;
        case 2:
            printf("");
            break;
        case 3:
            printf("");
            break;
        default:
            printf("Goodbye, see you next time!\n");
    }   //end of switch




}