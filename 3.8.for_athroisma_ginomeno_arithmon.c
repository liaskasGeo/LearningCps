#include <stdio.h>

int main() {
    int i,sum,x;
    sum = 0;

    for ( i = 1; i <= 3; i++)
    {
        printf("\nEisagete ton %do arithmo: ",i);
        scanf("%d",&x);
        sum+=x;
    }
    
    printf("\n\nTo athroisma twn arithmwn einai: %d",sum);

    return 0;
}