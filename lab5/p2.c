#include <stdio.h>

int main() {
    int n , sum=0, i;
    printf("How many numbers you want to enter");
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("enter the numbers one by one");
    for (i=0;i<n;i++) {
    scanf("%d", &a[i]);
    }
    for (int x=0;x<n;x++) {
        sum=sum+a[x];
        printf("%d\n", sum);
        b[x]=sum;  

    }
    printf("%d", b[n]);
    return 0;

}