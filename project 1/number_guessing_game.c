#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
// number guessing game
int main() {
    int number, guess, numberguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("this number is %d", number); // clean this line for random number guessing, otherwise the random number shows
    
    do{
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("lower number please!\n");
        }
        else if(guess<number){
            printf("higher number please!\n");
        }
        else{
            printf("you guessed it in %d attempts!\n", numberguesses);
        }
        numberguesses++;
    }while(guess!=number);

    return 0;
}