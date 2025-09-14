#include <stdio.h>

int main() {
    double diskm = 10.0; 
    double tmins = 43.0 + 30.0/60.0;  
    double thrs = tmins / 60.0;              

    double timeperkm = tmins / diskm; 
    double speed = diskm / thrs;        

    printf("Average time per km = %.2f minutes\n", timeperkm);
    printf("Average speed = %.2f km/h\n", speed);

    return 0;
}
