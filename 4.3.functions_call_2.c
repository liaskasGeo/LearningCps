#include <stdio.h>
#include <stdlib.h>

int square(int x); //Edw apla dilonoume xwris na exoume arxikopoihsei

int main() {
    system("chcp 65001");
    
    int a = 5;
    int b = 10;
    int teta,tetb,sum;

    teta = square(a); // Katevenei stin synartisi katw kai opou x vazei to a , a * a , return 
    tetb = square(b);
    sum = teta + tetb;
    printf("%d^2 + %d^2 = %d",a,b,sum);

    return 0;
}

int square(int x)
{
    int y;
    y=x*x;
    return y;
}

