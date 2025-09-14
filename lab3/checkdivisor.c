#include<stdio.h>

int main() {
    int a,b;
    printf ("enter the first number:");
    scanf ("%d\n", &a);
    printf ("enter the second number:");
    scanf ("%d\n", &b);
    if ( a > b)
{
    if ( a % b == 0)
    {
        printf("%d is divisible by %d\n", a, b);
    
    }
    else{
        printf("%d is not divisible by %d\n", a, b);
    }
}
    if ( b > a)
{
    if ( b % a == 0)
    {
        printf("%d is divisible by %d\n", b, a);
    
    }
    else{
        printf("%d is not divisible by %d\n", b, a);
    }

} 
return 0;
}  
