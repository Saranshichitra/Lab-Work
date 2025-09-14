#include<stdio.h>
 int main() {
    int a,b,c;
    printf("enter the value of first side");
    scanf("%d", &a);
    printf("enter the value of second side");
    scanf("%d", &b);
    printf("enter the third value");
    scanf("%d", &c);
    if ((a > 0) && (b > 0) && (c > 0))
    {
        if ((a + b > c) && (b + c > a) && (c + a > b))
        {
            printf("the triangle is possible");
        }
        else {
            printf("the triangle is not possible");
        }
    }
else {
    printf("one of the side you entered is 0");
}
return 0;
 }


