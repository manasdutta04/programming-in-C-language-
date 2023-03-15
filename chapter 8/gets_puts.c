#include<stdio.h> 

int main() {
    char s[34];
    printf("enter your name: ");
    gets(s);
    puts(s); // you should use this instead of the lower line
    // printf("your name is %s", s);
    return 0;
}