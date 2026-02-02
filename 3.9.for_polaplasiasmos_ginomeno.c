#include <stdio.h>

int main() {
    //POLLAPLASIASMOS
    int i , prod,x;

    prod = 1;

    for ( i = 0; i < 5; i++)
    {
        printf("\nEisagete ton %do arithmo: ",i+1);
        scanf("%d",&x);
        prod*=x;
    }
    
    printf("\n\nTo ginomeno twn arithmwn einai: %d",prod);

    return 0;
}