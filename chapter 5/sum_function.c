#include<stdio.h> 
int sum(int a, int b); // function prototype declaration

int main() {
    int c;
    c=sum(2,5); // function call
    printf("the value of c is %d\n", c);
    return 0;
}

int sum(int a, int b){
    int result;
    result=a+b;
    return result;
}