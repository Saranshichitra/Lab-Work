#include <stdio.h>
enum Menu { ADD=1, SUB, MUL, DIV, EXIT };
int main(){
enum Menu choice;
int n;
do {
    int a,b;
printf("Enter two numbers:");
scanf("%d %d",a,b);
printf("1.Add 2.Sub 3.Mul 4.Div 5.Exit\n");
scanf("%d", n);
switch(n){
case ADD: printf("Addition selected\n"); 
          int add=a+b;
          printf("The addition is :%d",add); break;
case SUB: printf("Subtraction selected\n"); 
          int sub=a-b;
          printf("The subtraction is :%d",sub); break;
case MUL: printf("multiplication selected\n"); 
          int mul=a*b;
          printf("The multiplication is :%d",mul); break;
case DIV: printf("division selected\n"); 
          float div=(float)a/b;
          printf("The division  is :%d",div); break;
case EXIT: printf("Bbye!\n"); break;
default : printf("Invalid option\n");
}
} while( n != EXIT);
return 0;
}