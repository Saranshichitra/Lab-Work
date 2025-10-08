#include <stdio.h>
    void greet() {
        printf("Welcome\n");
    }
    int add (int a,int b) {
        int sum = a + b;
        return sum;
    }
    float circleArea(float r) {
        float area = (3.14) * r * r;
        return area;
    }
    int main() {
        int a, b, r;
    printf("Enter the two numbers \n");
    scanf("%d %d", &a, &b);
    printf("enter the radius of circle \n");
    scanf("%d", &r);
    greet();
    printf("Sum=%d\n", add(a, b));
    printf("Area of circle is: %f\n", circleArea(r));
}

