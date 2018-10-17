#include <stdio.h>

int main()
{
    //using switch
    int choice, miles, totalMiles;
    float gallons, mpg, totalGallons, meanMPG;

    //print menu
    printf("        MENU\n");
    printf("    1   -   Gas Mileage\n");
    printf("    2   -   Sales Comission\n");
    printf("    3   -   Quit\n");
    
    do
    {
           //get menu choice
        printf("Enter your choice: ");
        scanf("%i",&choice);
        
        if(choice < 1 || choice > 3)
            printf("Invalid entry...try again\n");

    }while(choice < 1 || choice > 3);

    switch(choice)
    {
        case 1: printf("Gas Mileage\n");
            totalMiles = 0;
            totalGallons= 0;
            //input values
        
            printf("Enter the number of gallons you used: ");
            scanf("%f",&gallons);
        
            while(gallons != -1)
            {
                printf("Enter miles: ");
                scanf("%i", &miles);

                //calculations
        
                mpg = miles / gallons;
                printf("MPG = %.2f\n",mpg);
                
                totalMiles = totalMiles + miles;
                totalGallons = totalGallons + gallons;

                printf("Enter gallons: ");
                scanf("%f", &gallons);
            }   
            
            printf("Overall average miles per gallon was %.2f\n", totalMiles/totalGallons);
            break;

        case 2: printf("Sales\n");
            
            break;

        case 3: printf("Quit\n");

            break;

    }   //end of switch
}
