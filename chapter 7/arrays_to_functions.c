#include<stdio.h> 
void printarray(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("the value of element %d is %d\n", i+1, *(ptr+i));
    }
}

// you also use it instead of the upper coloumn
// void printarray(int ptr[], int n){
//     for(int i=0; i<n; i++){
//         printf("the value of element %d is %d\n", i+1, ptr[i]);
//     }
        // ptr[2]=5555; // will be change in arr array of main as well
// }

int main() {
    int arr[]={1, 2, 3543, 34, 3, 645, 23};
    printarray(arr, 7); // 7 for upper 7 values, if you give 8, it bounce out from the limit
    // printf("%d", arr[2]); give this when use the ptr[2]=5555;
    return 0;
}