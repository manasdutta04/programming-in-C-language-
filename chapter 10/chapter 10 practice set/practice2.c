#include<stdio.h> 

int main() {
    FILE *ptr;
    int num;
    printf("enter the integer you need the table of: ");
    scanf("%d", &num);
    ptr=fopen("table.txt", "w");
    for(int i=0; i<10; i++){
        fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(ptr);
    printf("successfully generated table of %d to table.txt\n");
    return 0;
}