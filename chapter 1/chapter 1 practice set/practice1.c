#include<stdio.h> 

int main() {
    int length, breadth;
    printf("what is the length of the rectangle\n");
    scanf("%d", &length);

    printf("what is the breadth of the rectangle\n");
    scanf("%d", &breadth);

    printf("the area of the rectangle is %d", length*breadth);
    return 0;
}