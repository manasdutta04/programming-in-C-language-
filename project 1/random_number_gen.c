#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
// generate a random number between 1 to 100
int main() {
    int number;
    srand(time(0));
    number=rand()%100+1;
    printf("this number is %d", number);
    
    return 0;
}