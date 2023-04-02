#include<stdio.h> 

int main() {
    FILE *fptr;
    int number=45;
    fptr=fopen("generated.txt", "w"); // generate new txt file
    fprintf(fptr,"the number is %d", number);
    fclose(fptr);

    return 0;
}