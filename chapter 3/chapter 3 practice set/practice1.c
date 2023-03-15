#include<stdio.h> 

int main() {
    int a=10;
    if(a=11){
        printf("i am 11\n");
    }
    //a=10 print i am 11
    //a==10 print i am not 11
    else
        printf("i am not 11\n");
    return 0;
}