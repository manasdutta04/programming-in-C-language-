#include<stdio.h> 

int main() {
    int x = 2;
    int y = 3;

    printf("the value of 3*x - 8*y is %d\n", 3*x - 8*y);
    printf("the value of 8*y / 3*x is %d\n", 8*y / 3*x); //wrong answer
    //it follows left-->right associativity, not follows BODMAS rule
    return 0;
}