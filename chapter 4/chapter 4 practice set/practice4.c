#include<stdio.h> 
//prime number
int main() {
    int n=2, i, prime=1;
    for(i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
            
        }
    }
    if(prime==0 && n!=2){
        printf("this is not a prime number");
    }
    else{
        printf("this is a prime number");
    }
    
    return 0;
}