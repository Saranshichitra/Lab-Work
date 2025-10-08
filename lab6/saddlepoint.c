#include <stdio.h>
int main() {
    int n, i, j, k, indexr1, indexr2;
    printf("Enter the order of the matrix:");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the values one by one:");
    for( i = 0; i < n; i++ )
    {
        for( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for( i = 0; i < n; i++ ){
        int rm = a[i][0];
        for( j = 1; j < n ; j++){
            if ( a[i][j] < rm ){
                rm = a[i][j];
                indexr1 = i;
                indexr2 = j;
            }
        }
    }

    
}