#include<stdio.h> 

int main() {
    int i=34;
    int *j=&i; // j will now store the address of i
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the address of i is %u\n", &i);
    printf("the address of i is %u\n", j);
    printf("the address of j is %u\n", &j);
    printf("the value of j is %d\n", *(&j));
    return 0;
}