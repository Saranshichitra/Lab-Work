#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Octal value: %o\n", n);
    printf("Hexadecimal value: %X\n", n);
    if (n >= 32 && n <= 126){ 
        printf("ASCII character: %c\n", n);
    } 
    else
     {
        printf("No ASCII character for the value you entered.\n");
    }
    return 0;
}