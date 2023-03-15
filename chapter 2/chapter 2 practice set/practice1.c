#include<stdio.h> 

int main() {

    // int a; b=a; it is not valid
    int a; int b=a; //valid

    int v=3^3; //valid, but it is not use as power, it is bitwiser operator
    printf("%d",v); //valid, but it does not print 9, it is a bitwiser
    //for power we use #include<math.h>  pow("2,3")

    // char dt = '21 Dec 2023'-->it is not valid
    char dt = '2'; //char use for only one charecter

    return 0;
}