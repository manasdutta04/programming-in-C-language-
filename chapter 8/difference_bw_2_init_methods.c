#include<stdio.h> 

int main() {
    char *ptr="MANAS";
    ptr="manas"; // it shows right

    // char ptr[]="MANAS";
    // ptr="manas"; // it shows error

    printf("%s", ptr);
    return 0;
}