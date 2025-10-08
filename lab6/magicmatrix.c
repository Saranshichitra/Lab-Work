#include <stdio.h>
int main() {
    int n, i, j, k, sumofcolumns=0, sumofrows=0, sumofdiagonals=0, t1, t2, t3;
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
    k = a[0][0] + a[0][1] + a[0][2];
    for( i = 0; i < n; i++ )
    {
        for( j = 0; j < n; j++)
        {
            sumofcolumns = sumofcolumns + a[i][j] ;
            if( sumofcolumns == k) {
                     t1 = t1 + 1;
            }
        }
    }
    for( i = 0; i < n; i++ )
    {
        for( j = 0; j < n; j++)
        {
            sumofrows = sumofrows + a[j][i];
            if( sumofcolumns == k) {
                     t2 = t2 + 1;
            }
        }
    }
    for( i = 0, j = n-1 ; i < n, j >= 0 ; i++, j-- ){
        sumofdiagonals = sumofdiagonals + a[i][j];
        if( sumofdiagonals == k) {
           t3 = t3 + 1;
        }
    }
    sumofdiagonals = 0;
    for( i = 0, j = 0 ; i < n, j < n ; i++, j++){
        sumofdiagonals = sumofdiagonals + a[i][j];
        t3 = t3 + 1;
    }
    if((t1 == n) && (t2 == n) && (t3 == 2)) {
        printf("It is a magic matrix");
    }
    else {
        printf("It is not a magic matrix");
    }
    return 0;
}