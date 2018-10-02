#include <stdio.h>

/* Choose your own adventure game: Basic framework.
There are options at every corner! Choose wisely,
you never know if and when you'll get skunked!

At the end, if all goes well, you'll find a nice lady(guy)
friend to call your gal(guy) (kidding, I'm not doing that
overused story).

The scene: You are a dog and you have to make a choice.
However, unlike with Gordon Freeman, free choice is not an
illusion.*/

int main(void){
    
    int choice1,choice2;

    printf("Do you go (1) left, (2) right, or (3) neither?\n");
    scanf("%i",&choice1);
    
    switch (choice1){
        case 1:
            printf("You chose to turn left.\n");
            printf("You got skunked!\n");
            break;
        case 2:
            printf("You chose to turn right.\n");
            printf("You see your neighbor. Do you (1): talk to him or (2) walk away?\n");
            scanf("%i",&choice2);
            if (choice2 == 1){
                printf("You chose to talk to your neighbor.\n");
                printf("Your neighbor is unfriendly, he chose to blow you off.\n");
            }
            else if (choice2 == 2){
                printf("You chose to walk away.\n");
                printf("You avoided social interaction! What are you doing with your life?\n");
            }
            break;
        case 3:
            printf("Fence Sitters Get Splinters.\n");
            break;
        default:
            printf("Invalid choice. What are you doing with your life?\n");
    }
    
    return 0;
}
