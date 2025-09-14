#include<stdio.h>
int main() {
    int i ,j;
    for(i = 1; i <= 13; i++)
    {
        printf("table of %d :", i);
        for(j = 1; j <= 10; j++)
        {
            int k = i * j;
            printf("%d\n   ", k);
        }
    }
    return 0;
}