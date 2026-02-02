#include <stdio.h>

//TRIANGLE 

int main() {

    int i,j;
    int N = 10;

    for (i = 1; i <= N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" X ");
        }
        printf("\n");
    }

    printf("\n\n");


        for (i = 0; i <= N; i++)
    {
        for(j=i; j<=N; j++)
        {
            printf(" X ");
        }
        printf("\n");
    }

    return 0;
}