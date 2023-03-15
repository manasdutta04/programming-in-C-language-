#include<stdio.h> 
void change(int a);

int main() {
    int b=344;
    printf("the value of b before change is %d\n", b);
    change(b);
    printf("the value of b after change is %d\n", b);
    return 0;
}

// the upper and lower value of b is not same, also it is not indicates same b

void change(int b){
    b=77;
}