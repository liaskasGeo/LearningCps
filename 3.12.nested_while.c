#include <stdio.h>

int main() {

    int i,j;
    int N = 20, M = 10;

    i = 0;

    while(i<=M)
    {
        j = 0;
        while (j<= N)
        {
            printf(" X ");
            j++;
        }
        printf("\n");

        i++;
    }


    return 0;
}