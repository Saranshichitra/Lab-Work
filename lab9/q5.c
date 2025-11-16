#include <stdio.h>
typedef struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
    } Emp;
    int main() {
        int i;
        Emp list[5];
        for ( i = 0; i < 5; i++ ) {
            printf("Enter the id, name, designation, salary: ");
            scanf("%d %s %s %f", &list[i].id, &list[i].name, &list[i].designation, &list[i].salary );
        }
        printf("ID   Name   Designation   Salary");
        for ( i = 0; i < 5; i++ ) {
             printf("\n");
            printf("%d   %s   %s   %f", list[i].id, list[i].name, list[i].designation, list[i].salary);  
        }
        return 0;
    }
    
