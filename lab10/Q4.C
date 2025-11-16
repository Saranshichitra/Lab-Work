#include<stdio.h>
typedef struct  {
    int id;
    float salary;
    char name[30];
} emp1;
typedef union {
    int id;
    float salary;
    char name[30];
} emp2;
int main() {
    int i1 = sizeof(emp1);
    int i2 = sizeof(emp2);
 printf("Size of structure is: %d \n", i1);
 printf("Size of union: %d", i2);
}
