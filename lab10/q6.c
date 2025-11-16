#include<stdio.h>
enum Cartypes { SEDAN, SUV, HATCHBACK };
typedef struct {
    char name[30];
    char model[30];
    enum Cartypes type[10]; 
}Car;
int main(){
    Car c[3];
    printf("Enter the name model and type of the car \n");
    for( int i = 0 ; i < 2; i++){
    scanf("%c %c %c", &c[i].name, &c[i].model, &c[i].type );
}
printf("Name      Model     Type");
 for( int i = 0 ; i < 2; i++){
    printf("%2c %5c %9c", &c[i].name, &c[i].model, &c[i].type );
}
return 0;
}
