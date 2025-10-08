#include <stdio.h>
int fac(int a) {
    int p = 1;
    for ( int i = a; i >= 1; i-- ) {
       p = p * i;
    }
    return p;
}
int main() {
    int n, r, n1, n2, n3, c, ans;
    printf("Enter the value of n and r for [C(n,r)]\n");
    scanf("%d %d", &n, &r);
    n1 = fac(n);
    n2 = fac(r);
    c = n - r;
    n3 = fac(c);
    ans = n1 / ( n2 * n3);
    printf("Answer=%d\n", ans);
}
