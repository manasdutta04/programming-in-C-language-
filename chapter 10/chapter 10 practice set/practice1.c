#include<stdio.h> 

int main() {
    int a, b, c;
    FILE *ptr;
    ptr=fopen("pr01.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("the value of a, b, c is: %d %d %d", a, b, c);
    return 0;
}