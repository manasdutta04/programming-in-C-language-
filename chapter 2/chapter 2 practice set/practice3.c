#include<stdio.h> 

int main() {
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("divisibility test returns: %d", num%97);
    return 0;
}