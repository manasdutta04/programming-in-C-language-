#include<stdio.h> 
#include<string.h>

int main() {
    char *st="this";
    char st2[45];
    strcpy(st2, st);
    printf("now the st2 is %s", st2);

    // char st1[45]="hel";
    // char *st2="helo";
    // int val=strcmp(st1, st2);
    // printf("now the val is %d", val);
    // this upper coloumn use in basis of alphabetical order

    return 0;
}