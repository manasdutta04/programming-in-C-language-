#include<stdio.h> 
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
} emp;

void show(struct employee emp){
    printf("the code of employee is: %d\n", emp.code);
    printf("the salary of employee is: %f\n", emp.salary);
    printf("the name of employee is: %s\n", emp.name);
    emp.code=34;
}

int main() {
    // declaring e1 and ptr
    emp e1;
    emp *ptr;

    // declaring ptr to e1
    ptr=&e1;

    // set the number values for e1
    ptr->code=101;
    ptr->salary=11.01;
    strcpy(ptr->name, "Manas");
    show(e1);

    return 0;
}