#include <stdio.h>

int main() {
    int num[5], sum = 0;
    float avg;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    avg = sum / 5.0;
    printf("Average = %.2f\n", avg);

    return 0;
}