#include <stdio.h>

int main() {
    int i;

    do{
        printf("Doste enan akeraio apo to 1 eos to 100: ");
        scanf("%d",&i);
    }while (i<1 || i>100);

    return 0;
}