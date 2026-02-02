#include <stdio.h>
#define SIZE 3 

int main() { 
    int pin[SIZE]; //starts from zero = 1 , one = 2 etc // arxikopoihsh pinaka
    int sum;

    pin[0] = 1;
    pin[1] = 2;
    pin[2] = 3;

    sum = pin[0]+pin[1]+pin[2];
    printf("\n %d + %d + %d = %d",pin[0],pin[1],pin[2],sum);

    return 0;
}