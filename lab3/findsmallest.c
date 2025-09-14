#include<stdio.h>

int main() {
    int a,b,c;
    printf("enter the first value");
    scanf("%d", &a);
     printf("enter the second value");
    scanf("%d", &b);
    printf("enter the third value");
    scanf("%d", &c);
    if ((a < b) && ( a < c))
    {
        printf("%d is the smallest number:", a);
    }
    if ((b < a) && ( b < c))
    {
        printf("%d is the smallest number:", b);
    }
    if ((c < b) && ( c < a))
    {
        printf("%d is the smallest number:", c);
    }
    return 0;
}