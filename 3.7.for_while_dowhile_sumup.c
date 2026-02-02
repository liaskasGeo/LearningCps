#include <stdio.h>

int main() {
    
    int i = 1;

    for(i = 1; i <= 5; i++)
        printf("To %d\n",i);

    i = 1;
    while (i <= 5)
    {
        printf("Ksana to %d\n",i);
        i++;
    }

    i = 1;

    do
    {
        printf("Ksana kai ksana to %d\n",i);
        i++;
    } while (i <= 5);
    
    

    return 0;
}