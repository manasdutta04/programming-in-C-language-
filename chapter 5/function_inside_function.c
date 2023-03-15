#include<stdio.h> 
void goodmorning();
void goodafternoon();
void goodnight();
// function inside function
int main() {
    goodmorning();
    return 0;
}

void goodmorning(){
    printf("good morning\n");
    goodafternoon();
}

void goodafternoon(){
    printf("good afternoon\n");
    goodnight();
}

void goodnight(){
    printf("good night\n");
}