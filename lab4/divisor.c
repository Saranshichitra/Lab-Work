 #include <stdio.h>
 int main() {
    int c=0;
    double n;
    printf("enter the number:");
    scanf("%d", &n);
    double x = n;
    while(n > 1.0)
    {
       n = n / 2.0;
       c = c + 1;
    }
    printf(" number of times %d is divisible by 2 is: %d", x, c);
    return 0;
 }

