#include <stdio.h>
#include <stdlib.h>

int get_integer(int start,int finish);

int main() {
    system("chcp 65001");
    
    int a,b,n,res;

    /*1. Diavasma eisodou*/

    printf("Dose to a. ");
    a = get_integer(1,10);
    printf("Dose to b. ");
    b = get_integer(1,10);
    printf("Dose to n.");
    n = get_integer(2,5);

    /*2. Ypologismos tou apotelesmatos*/
    res = n*(a-b);

    printf("To apotelesma n*(a-b) = %d",res);

    return 0;
}

int get_integer(int start,int finish)
{
    int x;

    do{
        printf("Dose mia timi apo %d ews %d: ",start,finish);
        scanf("%d", &x);
    }while(x<start || x>finish);

    return x;
}