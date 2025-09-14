#include <stdio.h>
#include <math.h>

int main() {
    double a = 2, b = -4, c = -3;
    double dis, r1, r2;

    dis = b*b - 4*a*c;

    if (dis >= 0) {
        r1 = (-b + sqrt(dis)) / (2*a);
        r2 = (-b - sqrt(dis)) / (2*a);
        printf("Roots are: %.2f and %.2f\n", r1, r2);
    } else {
        printf(" ");
    }
    return 0;
}