#include <stdio.h>
#include <stdlib.h>                     //required to run rand()
#include <time.h>                       //required for srand(time(NULL))

int main (void)
{
    srand(time(NULL));                  //required for randomness

                                        //variables
    int random_number,n;
                                        /*generate a random number
                                        random_number = rand()
                                        %
                                        range + initial value*/
    for(n = 1; n <= 10; ++n) 
    {
        random_number = rand() % 10;    //generate a number between 0 and 9

        printf("%i\n",random_number);
    }

	return 0;
}