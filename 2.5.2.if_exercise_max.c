#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    
    int x,y,max,z,max2;

    printf("Insert 1st number: ");
    scanf("%d",&x);
    printf("Insert 2st number: ");
    scanf("%d",&y);

    if (x > y) {
    max = x;
    printf("Max is: %d\n", max);
    } else if (y > x) {
    max = y;
    printf("Max is: %d\n", max);
    } else {
    printf("Numbers are equal\n");
    }
        

    printf("Insert x number: ");
    scanf("%d",&x);
    printf("Insert y number: ");
    scanf("%d",&y);
    printf("Insert z number: ");
    scanf("%d",&z);

    if (x == y && y == z)
        printf("Numbers are equal\n");
    else if (x >= y && x >= z)
        printf("x is the highest = %d\n", x);
    else if (y >= x && y >= z)
        printf("y is the highest = %d\n", y);
    else
        printf("z is the highest = %d\n", z);
    
    return 0;
}