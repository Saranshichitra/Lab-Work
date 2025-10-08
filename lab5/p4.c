#include <stdio.h>

int main()
 {
    int n,i,j=1;
    printf("how many numbers you want to enter");
    scanf("%d", &n);
    int a[n];
    int b[n*2];
    for (i=0;i<n;i++)
     {
    a[i]=b[i+0];
    a[i]=b[i+j];
    j=j+1;
    }
    
    printf("%d", b[n*2]);
    return 0;
}