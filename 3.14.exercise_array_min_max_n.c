#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main() {
    system("chcp 65001");
    
    int pin[SIZE],min,i,N;

    /*Eisagogi N (1..20)me amuntiko programmatismo*/
    do
    {
        printf("Dose to N: ");
        scanf("%d",&N);
    } while (N < 2 || N>20);

    /*Diabasma N arithmwn*/

    for ( i = 0; i < N; i++)
    {
        printf("Dose ton %do arithmo: ",i+1);
        scanf("%d",&pin[i]);
    }
    
    /*Ypologismos Pinaka*/

    min = pin[0];

    for(i =1; i<N; i++)
    {
        if(pin[i]<min)
            min=pin[i];
    }


    printf("O elaxistos einai to %d",min);

    return 0;
}