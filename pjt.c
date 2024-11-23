
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    printf("ROCK, PAPER, SCISSORS \n");
    int wins=0;
    int losses=0;
    int ties=0;
    char playermove,computermove;
    srand(time(NULL));

    int min = 1; // Lower bound of range
    int max = 3; // Upper bound of range

    // Generate a random number in the range [min, max]
    int random_number;
    
    while (1){
        printf("%d Wins, %d Losses, %d Ties\n",wins,losses,ties);
        while(1){
            printf("Enter your move: (r)ock (p)aper (s)cissors or (q)uit\n");
            scanf(" %c", &playermove);
            if (playermove=='q'){
                exit(0);
            }
            if((playermove=='r')||(playermove=='p')||(playermove=='s')){
                break;
            }
            printf("Type one of r, p, s, or q.\n");
        }
        if (playermove=='r'){
            printf("ROCK versus...");
        }
        else if(playermove=='p'){
             printf("PAPER versus...");
        }
        else if(playermove=='s'){
             printf("SCISSORS versus...");
        }
        random_number = min + rand() % (max - min + 1);
        if(random_number==1){
            computermove='r';
            printf("ROCK\n");
        }
        else if(random_number==2){
            computermove='p';
            printf("PAPER\n");
        }
        else if(random_number==3){
            computermove='s';
            printf("SCISSORS\n");
        }
        if (playermove == computermove){
            printf("It is a tie!");
            ties = ties + 1;
        }
        else if((playermove=='r')&&(computermove=='s')||(playermove=='p')&&(computermove=='r')||(playermove=='s')&&(computermove=='p')){
            printf("You Win!\n");
            wins++;
        }
        else{
            printf("You Lose!\n");
            losses++;
        }
        
 
 
    }
    return 0;
}