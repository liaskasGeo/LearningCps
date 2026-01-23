#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;

    printf("Doste ton akeraio x: ");
    scanf("%d",&x);

    if(x%2==0)
        printf("\nO arithmos einai artios!");
    else
        printf("O arithmos einai perittos!");
}