#include <stdio.h>
  enum Menu { mon=1, tues, wed, thurs, fri, sat , sun,  EXIT };
int main(){
  int n;
enum Menu choice;
do {
    printf("Enter no from 1 to 7:");
scanf("%d", n);
switch(n){
case 1: printf("Monday!\n"); break;
case 2: printf("Tuesday!\n"); break;
case 3: printf("Wednesday!\n"); break;
case 4: printf("Thursday!\n"); break;
case 5: printf("Friday!\n"); break;
case 6: printf("Saturday!\n"); break;
case 7: printf("Sunday!\n"); break;
default : printf("Invalid option\n");
}
if(n==1 || n==2 || n==3 || n==4 || n==5){
  printf("It is weekday!!");
}
else{
  printf("It is weekend");
}
} while( n != EXIT);
}