#include <stdio.h>
 enum Traffic { RED=1, YELLOW, GREEN };
 int main() {
    enum Traffic light;
    printf("Which light is appearing (1 for red 2 for yellow 3 for green)");
    scanf("%d", &light);
switch(light){
 case 1: printf("Stop\n"); break;
 case 2: printf("Ready\n"); break;
 case 3: printf("Go!\n"); break;
 default : printf("Invalid option\n");
}
 return 0;
}