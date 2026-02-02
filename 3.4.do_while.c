#include <stdio.h>

int main() {
    int i = 10;
    do
    {
        i = i-1;
        printf("\n%d",i);
    } while (i > 0);

    i = 0;

    printf("\n\n");

    do
    {
        i = i+1;
        printf("\n%d",i);
    } while (i<5);
    

    return 0;
}