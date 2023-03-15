#include<stdio.h> 
void printtable(int *multable, int num, int n){
    printf("the multiplication table of %d is:\n", num);
    for(int i=0; i<10; i++){
        multable[i]=num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dX%d=%d\n", num, i+1, multable[i]);
    }
    printf("*******************************\n");
}



int main() {
    int multable[3][10];
    printtable(multable[0], 2, 10);
    printtable(multable[1], 7, 10);
    printtable(multable[2], 9, 10);


    // for(int i=0; i<10; i++){
    //     multable[0][i]=2*(i+1);
    // }

    // for(int i=0; i<10; i++){
    //     printf("2X%d=%d\n", i+1, multable[0][i]);
    // }


    // for(int i=0; i<10; i++){
    //     multable[0][i]=7*(i+1);
    // }

    // for(int i=0; i<10; i++){
    //     printf("7X%d=%d\n", i+1, multable[0][i]);
    // }


    // for(int i=0; i<10; i++){
    //     multable[0][i]=9*(i+1);
    // }

    // for(int i=0; i<10; i++){
    //     printf("9X%d=%d\n", i+1, multable[0][i]);
    // }

    return 0;
}