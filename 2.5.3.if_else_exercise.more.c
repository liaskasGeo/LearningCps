#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    
    int x,y,z,max;

    printf("Insert x number: ");
    scanf("%d",&x);
    printf("Insert y number: ");
    scanf("%d",&y);
    printf("Insert z number: ");
    scanf("%d",&z);

    max = x;

    if (y > max)
        max = y;
    if (z>max)
        max = z;

    printf("Max is %d",max);

    return 0;
}