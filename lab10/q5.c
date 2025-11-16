#include<stdio.h>
typedef struct {
    int m1;
    int m2;
    int m3;
} Marks;
int main() {
    int i, sum;
    Marks details[5];
    int total[5];
    int avg[5];
    printf("Enter the marks of all 5 students one by one sequentially");
    for( i = 0; i < 5; i++ ){
      scanf("%d %d %d", &details[i].m1, &details[i].m2, &details[i].m3);
    }
    for ( i = 0; i < 5; i++){
     total[i] = details[i].m1+details[i].m2+details[i].m3;
     avg[i] = total[i]/3;
    }
    printf("Sr No.  Total Marks    Average marks  \n");
   for ( i = 0; i < 5; i++){
    int s= i + 1;
    printf("%4d  %6d  %12d \n", s , total[i] , avg[i]   );
}
return 0;
}


