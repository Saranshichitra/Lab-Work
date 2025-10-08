#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, n, s1 = 0, s2 = 0, t=0;
    printf("Enter the length of the matrix: \n");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the values one by one:\n");
    for( i = 0; i < n; i++ )
    {
        for( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for( i = 0; i < n; i++ )
    {
        for( j = 0; j < n; j++ ) {
            if( i != j){
                s1 = s1 + abs(a[i][j]);
            }
        }
        s2 = s2 + a[i][i];
    
    if ( s1 <=  s2) {
        t = t + 1;
    }
}
if ( t == n ) {
        printf("It is a diagonally dominant matrix");
    }
    else {
        printf("It is not a diagonally dominant matrix");
    }
    return 0;
}