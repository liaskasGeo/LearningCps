#include <stdio.h>
#include <stdlib.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);


int main() {
    system("chcp 65001");
    
    printf("Is this number even(1=true,0=false) : %d\n",is_even(2));
    printf("Is this number odd(1=true,0=false) : %d\n",is_odd(2));
    printf("Is this number square of a number?(1=true,0=false) : %d\n",is_square(22)); // 22 no , 25 yes 5*5=25
    printf("Is this number cube of a number (1=true,0=false) : %d",is_odd(27)); // (3*3*3 = 27 true = 1)

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