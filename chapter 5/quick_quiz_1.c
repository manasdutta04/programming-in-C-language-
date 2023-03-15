#include<stdio.h> 
void goodmorning();
void goodafternoon();
void goodnight();

int main() {
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}

void goodmorning(){
    printf("good morning\n");
}

void goodafternoon(){
    printf("good afternoon\n");
}

void goodnight(){
    printf("good night\n");
}