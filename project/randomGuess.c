// guess the random number.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int random, guess;
    int noOfGuess=0;
     
    srand(time(NULL));
    printf("\nWelcome! in Guessing Game\n");
    random = rand() % 100 +1;
    do{
        printf("\nokay user now guess the number between(1 to 100) : ");
        scanf("%d",&guess);
        noOfGuess++;
        if(guess<random)
           printf("oops! you guessed wrong, guess a large number.\n");
        else if(guess>random)
          printf("oops! you guessed wrong, guess a small number.\n");
        else {
          printf("\ncogratulations!!! you have succesfully guess the random number.\n");
          printf("guessed no. is : %d \n",random);
          printf("user, you guessed the number in %d attempts\n",noOfGuess);
          break;
        }
        
    }while(guess != random);
    
    printf("thank you! I hope you enjoyed this game.\n");
    printf("Game developed by Saurav Singh Mehta\n");
    return 0;
}