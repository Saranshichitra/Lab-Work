#include <stdio.h>
 int isPrime(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++ ) {
        if ( n % i == 0 ) {
            count++;
          }
          if ( count == 2 ) { 
          return 1;
          }
          else { 
          return 0;
         }
 }
}
int display(int a, int b) {
    int count = 0;
    for(int i = a; i <= b; i++ ) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
 }
}
int find(int a, int b, int w) {
    int count = 0, s = 0;
    for(int i = a; i <= b; i++ ) {
        if (isPrime(i)) {
            s++;
            if ( s == w ) {
                printf("%d \n", i);
                break;
            }
        }
 }
}
int main() {
int a, b, n, w;
printf("Enter the number you want to check whether prime or not");
scanf("%d", &n);
printf("Enter the range where you want to check which all numbers are prime(low range followed by high range)");
scanf("%d %d", &a, &b);
printf("Enter the Nth prime number you want to find");
scanf("%d", &w);
printf("(If %d is prime, 1 will return else 0 ) %d\n", n, isPrime(n));
printf("Prime numbers between %d and %d are:", a, b);
display(a ,b);
printf("%dth prime between %d and %d is:", w, a, b);
find(a, b, w);
}