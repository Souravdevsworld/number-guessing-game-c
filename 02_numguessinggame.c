#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    
    // printf("Random Number: %d\n", randomNumber);
    printf("Guess the number : ");
    int no_of_guesses = 0;
    int guessed;
    
    do{
        scanf("%d",&guessed);
        if(guessed==randomNumber)
        {
            no_of_guesses+=1;
            printf("You guessed the number %d correctly in %d no of guesses",randomNumber,no_of_guesses);
        }
        if(guessed>randomNumber)
        {
            no_of_guesses+=1;
            printf("Guess a lower number :"); 
        }
        if(guessed<randomNumber)
        {
            no_of_guesses+=1;
            printf("Guess a higher number :");
        }
    }while(guessed!=randomNumber);

}


    
    
    

 















