#include <stdio.h>
#include <stdlib.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);


int main() {
    system("chcp 65001");
    
    int x;
    printf("Insert number: ");
    scanf("%d",&x);
    if(is_even(x)) // is_even(x)==1 Ennoeitai auto edw.)
        printf("\nIts even number. ");
    
    if(is_odd(x))
        printf("\nIts odd number.");

    if(is_square(x))
        printf("\nIts square number. ");
    
    if(is_odd(x))
        printf("\nIts cube number. ");

    return 0;
}

int is_even(int n)
{
    if (n%2 == 0)
        return 1;
    else
        return 0;
}

int is_odd(int n)
{
    if (n%2 == 1) // n%2 =!0
        return 1;
    else
        return 0;
}

int is_square(int n)
{
    int i;

    for(i=1; i<=n; i++)
    {
        if(i*i == n)
            return 1;
        else if (i*i>n)
            return 0;
    }
}

int is_cube(int n)
{
    int i;

    for(i=1; i<=n; i++)
    {
        if(i*i*i == n)
            return 1;
        else if (i*i*i>n)
            return 0;
    }
}