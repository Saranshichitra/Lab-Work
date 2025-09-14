 #include<stdio.h>
 int main() {
 int n, i, sum = 0;
 printf("Enter the number greater than 2: ");
 scanf("%d", &n); 
 for(i = 2; i <= n; i +=2)
 {
 sum = sum + (i * i);
 }
 printf("Sum of squares of even numbers between 2 and %d = %d\n", n, sum);
 return 0;
 }
 