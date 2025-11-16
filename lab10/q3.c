#include<stdio.h>
 enum Day { MON=1,TUES, WED, THURS, FRI, SAT, SUN };
 int main(){
 enum Day choice;
 printf("Enter the Number between 1 to 7\n");
 scanf("%d", (int*)&choice);
 switch(choice){
 case 1: printf("MONDAY\n"); break;
 case 2: printf("TUESDAY\n"); break;
 case 3: printf("WEDNESDAY\n"); break;
 case 4: printf("THURSDAY\n"); break;
 case 5: printf("FRIDAY\n"); break;
 case 6: printf("SATURDAY\n"); break;
 case 7: printf("SUNDAY\n"); break;
 default : printf("Invalid option\n");
 }
 }
