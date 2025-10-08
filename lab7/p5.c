#include <stdio.h>
int main() {
    int n;
    printf("How many numbers you want to enter:");
    scanf("%d", &n);
    int a[n];
    for ( int i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);
    }
    maxmin( a[n]);
    avg( a[n]);
}
void maxmin( int a[n] ) {
    int l = a[3];
    int s = a[3];
    for ( int i = 0; i <= n; i++ ) {
        if ( a[i] > l) {
            l = a[i];
        }
        if ( a[i] < s) {
            s = a[i];
        }
    }
    printf("Largest number is: %d\n", l);
    printf("Smallest number is: %d\n", s);
}
int avg( a[n]) {
    int s = 0;
    for ( int i = 0; i <= n; i++ ) { 
        s = s + a[i];
}
int avg= s / n;
return avg;
}