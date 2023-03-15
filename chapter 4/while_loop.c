#include<stdio.h> 

int main() {
    int a=34;
    scanf("%d", &a);
    while(a<10){
        printf("%d\n", a);
        a++;
    }

    // a=11;
    // while(a>10){
    //     printf("%d\n", a);
    //     a++;
    // } ----> this is a infinity loop

    return 0;
}