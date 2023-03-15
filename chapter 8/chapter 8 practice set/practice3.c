#include<stdio.h> 
void slice(char *st, int m, int n){
    int i=0;
    while((m+i)<n){
        st[i]=st[i+m];
        i++;
    }

    st[i]='\0';
}

int main() {
    char st[]="Manas";
    slice(st, 1, 4); // print 2, 3, 4 number words in Manas
    printf("%s", st);
    return 0;
}