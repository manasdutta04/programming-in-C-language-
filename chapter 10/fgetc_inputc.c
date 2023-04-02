#include<stdio.h> 

int main() {
    FILE *ptr;
    // ptr=fopen("generated.txt", "r"); // read txt file

    // // char c=fgetc(ptr);
    // // printf("the value of my character is %c\n", c);
    // // read letter by letter

    // printf("the value of my character is %c\n", fgetc(ptr));
    // printf("the value of my character is %c\n", fgetc(ptr));
    // printf("the value of my character is %c\n", fgetc(ptr));
    // printf("the value of my character is %c\n", fgetc(ptr));

    ptr=fopen("putdemo.txt", "w"); // write txt file
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);

    return 0;
}