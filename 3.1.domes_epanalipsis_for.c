#include <stdio.h>

int main() {
    int i,j,x;
    //Me auksisi
    for ( i = 1; i < 5; i++)
    {
        printf("Kalimera\n");
    }
    
    for ( i = 1; i <= 3; i++)
    {
        printf("\ni = %d",i);
    }

    printf("\n");

    for ( j = 0; j < 2; j++)
    {
        x = j*j-1;
        printf("\n%d",x);
    }
    printf("\n\n");

    //Me meiosi
    printf("Me meiosi: \n\n");

    for (i = 10; i >= 1; i--)
    {
        printf("i = %d\n",i);
    }


    return 0;
}