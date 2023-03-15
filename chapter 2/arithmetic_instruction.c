#include<stdio.h> 
#include<math.h>

int main() {
    int a = 4;
    int b = 8;
    printf("the value of a+b is: %d \n", a+b);
    printf("the value of a-b is: %d \n", a-b);
    printf("the value of a*b is: %d \n", a*b);
    printf("the value of a/b is: %d \n", a/b);

    // int z;
    // z=b*a; it is valid
    // b*a=z; it is not valid

    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
    // remainder is like what is left after deviding 5 by 2
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);

    // int i=a*b; it is valid
    // int i=ab; it is not valid

    printf("the value of 4 to the power 5 is %f\n", pow(2,5));
    // here we should use %f for real double value return

    printf("the value of 6+5 is %d\n", 6+5); //int+int=int
    printf("the value of 6+5.6 is %f\n", 6+5.6); //int+float=float
    printf("the value of 6.1+5.6 is %f\n", 6.1+5.6); //float+float=float

    printf("the value of 5/2 is %d\n", 5/2); //int
    printf("the value of 3.0/9 is %f\n", 3.0/9); //float

    return 0;
}