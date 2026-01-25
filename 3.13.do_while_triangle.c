#include <stdio.h>

//TRIANGLE 

int main() {

    int i,j;
    int N = 10;

    i=1;
    do{//kane auto
            j=1;
            do{//Kai kane auto
            printf(" X ");
            j++;

            }while(j <= i); //kai oso auto

        printf("\n");
        i++;

    }while(i <= N);//Oso auto


    return 0;
}