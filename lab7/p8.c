#include <stdio.h>
int fac(int n) {
    int p = 1;
    for ( int i = n; i >= 1; i-- ) {
       p = p * i;
    }
    return p;
}
int isPrime(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++ ) {
        if ( n % i == 0 ) {
            count++;
          }
        }
          if ( count == 2 ) { 
          return 1;
          }
          else { 
          return 0;
         }
 }
int main() {
    int n, a;
    printf("Enter the number you want to find factorial");
    scanf("%d", &n);
    printf("Enter the number you want to check whether prime or not");
    scanf("%d", &a);
    printf("(If %d is prime, 1 will return else 0 ) %d\n", a, isPrime(a));
    fac(n);
    printf("Factorial of %d id: %d\n", n, fac(n));

}
