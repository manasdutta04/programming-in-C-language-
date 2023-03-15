#include<stdio.h> 

int main() {
    //97-122=a-z
    //ASCII values
    char ch;
    printf("enter the charecter\n");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf("it is lowercase");
    }
    else{
        printf("it is not lowercase");
    }
    return 0;
}