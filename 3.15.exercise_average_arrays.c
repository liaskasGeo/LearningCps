#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main() {
    system("chcp 65001");
    
    int pin[SIZE],min,i,N,summ;
    float average;

    /*Eisagogi N (1..20)me amuntiko programmatismo*/
    do
    {
        printf("Dose to N: ");
        scanf("%d",&N);
    } while (N < 1 || N>20);

    /*Diabasma N arithmwn*/
    summ = 0;
    for ( i = 0; i < N; i++)
    {
        printf("Dose ton %do arithmo: ",i+1);
        scanf("%d",&pin[i]);
        summ = summ + pin[i];
        printf("\nSum = %d\n",summ);
    }
    
    /*Ypologismos Pinaka*/

    average = summ /(float)N;
    printf("\nO mesos oros twn arithmwn einai: %f",average);

    return 0;
}