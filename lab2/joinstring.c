#include <stdio.h>

int main() {
    char str1, str2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2); 

    printf("Joined string = %s\n", str1);
    return 0;
}