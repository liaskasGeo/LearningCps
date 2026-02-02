#include <stdio.h>
//PROSTHESI
int main() {
    int i,sum,x,prod;
    sum = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("\nEisagete ton %do arithmo: ",i+1);
        scanf("%d",&x);
        sum+=x;
    }
    
    printf("\n\nTo athroisma twn arithmwn einai: %d",sum);

    return 0;
}