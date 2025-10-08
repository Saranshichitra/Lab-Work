#include<stdio.h>
 
int main()
{
    int n;
    printf("how many numbers you want to enter");
    scanf("%d", &n);
    int a[n];
    int i;
    printf("enter numbers one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i])
    }
    
    
    int ln=a[1];
    int sn=a[1];
    for (i=0;i<n;i++)
    {
     if(ln < a[i])
     {
       ln=a[i];
     }
     if(sn > a[i])
     {
        sn=a[i];
     }
    }
    printf("largest number is %d \n", ln);
    printf("smallest number is %d \n", sn);
}