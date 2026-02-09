#include <stdio.h>
#include <stdlib.h>

/* Prototypes */
int is_even(int n);
void check_even_from_input(void);
int square(int n);
void check_square_from_input(void);
int cube(int n);
void check_cube_from_input(void);

int main(void)
{
    system("chcp 65001");  // για UTF-8 στα Windows

    check_even_from_input();
    check_square_from_input();
    check_cube_from_input();

    return 0;
}

/* ---------------- Bodies των συναρτήσεων ---------------- */

int is_even(int n)
{
    return n % 2 == 0;
}

void check_even_from_input(void)
{
    int n;
    printf("Enter a number to check even/odd: ");
    scanf("%d", &n);

    if (is_even(n))
        printf("Even\n");
    else
        printf("Odd\n");
}

int square(int n)
{
    return n * n;
}

void check_square_from_input(void)
{
    int n;
    printf("Enter a number to calculate its square: ");
    scanf("%d", &n);

    printf("Square: %d\n", square(n));
}

int cube(int n)
{
    return n * n * n;
}

void check_cube_from_input(void)
{
    int n;
    printf("Enter a number to calculate its cube: ");
    scanf("%d", &n);

    printf("Cube: %d\n", cube(n));
}

