#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main() {
    system("chcp 65001");

    int x;
    int res;

    printf("Doste ton fysiko: ");
    scanf("%d", &x);

    res = factorial(x);

    printf("%d! = %d",x,res);

    return 0;
}

int factorial(int n){
    int y;

    if (n == 1)
    return 1;
    else{
        y = factorial(n-1);
        return n*y;
    }
}