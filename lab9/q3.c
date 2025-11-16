#include <stdio.h>
struct Address {
    char city[50];
    char state[50];
    long pincode;
} ;
typedef struct{
    char name[50];
    int roll;
    struct Address addr;
} Student;
int main() {
    int i;
    Student list[3];
    for ( i = 0 ; i < 3; i++ ) {
       printf("Enter the name, roll number, address(city state pincode): ");
     scanf("%s %d %s %s %lu", &list[i].name, &list[i].roll, &list[i].addr.city, &list[i].addr.state, &list[i].addr.pincode);  
    }
    printf("Name  Roll number  City  State  Pincode");
     for ( i = 0 ; i < 3; i++ ) {
        printf("\n");
    printf("%s %d %s %s %lu", list[i].name, list[i].roll, list[i].addr.city, list[i].addr.state, list[i].addr.pincode);  
}
return 0;
}

