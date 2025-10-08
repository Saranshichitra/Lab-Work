#include<stdio.h>
 
int main() 
{
    int a[10]= {3,-4,-6,9,0,7,2,10,-2,-1};
    int pn = 0 , nn = 0 ,i ;
    for ( i=0 ; i<10 ; i++ ) 
    {
    if ( a[i] >= 0 ) 
    {
    pn = pn + 1;
    }
    else {
    nn = nn + 1;

    }
}
    printf("Total no. of positive numbers %d \n", pn);
    printf("Total no. of negative numbers %d \n", nn);
    return 0;
}