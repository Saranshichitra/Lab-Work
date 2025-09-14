#include<stdio.h>
int main() {
    int i, x, p=0, n=0, z=0;
    printf("how many numbers you want to enter:");
    scanf("%d", x);
    int a[x];
    printf("enter the numbers one by one");
    for(i=0; i < x; i++)
    {
       scanf("%d", a[i]);
    }
    for(i=0; i < x; i++)
{
    if ( a[i] > 0)
    {
        p = p + 1;
    }
    if ( a[i] < 0)
    {
         n = n + 1;
    }
    else{
        z = z + 1;
    }
}
    printf("positive numbers %d\n", p);
    printf("negative numbers %d\n", n);
    printf("zeroes %d\n", z);
    return 0;

}