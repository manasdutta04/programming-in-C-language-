#include<stdio.h> 

int main() {
    int i=34;
    int *ptr=&i;
    printf("the value of ptr is %u\n", ptr);
    ptr++;
    ptr++;
    ptr++;
    // as much ptr++ you have join, as much difference of 4 you may get
    
    // you also do this
    // ptr--;
    // ptr=ptr+1;
    // ptr=ptr-1;


    // you also do this
    // char i=34;
    // char *ptr=&i;
    // printf("the value of ptr is %u\n", ptr);
    // ptr=ptr+1;

    // you also do this
    // float i=3.4;
    // float *ptr=&i;
    // printf("the value of ptr is %u\n", ptr);
    // ptr=ptr+1;

    printf("the value of ptr is %u\n", ptr);

    return 0;
}