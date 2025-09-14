#include <stdio.h>

int main() {
    int length, width;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);

    printf("length / 3 = %d \n", length / 3);                    //integer value will be returned
    printf("width / 2 = %d \n", width / 2);                      //integer value will be returned
    printf("length / 3.0 = %.2f (float)\n", length / 3.0);       //decimal value will be returned as denominator has a decimal    
    printf("length / width = %d \n", length / width);            //integer value will be returned
    printf("(width + length) / length > length / width = %d (int: 0=false,1=true)\n",
           (width + length) / length > length / width);

return 0;
}