#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    
    int age;
    
    while (1)
    {
        printf("Insert age: ");
        scanf("%d",&age);

        if (age >= 18 && age < 65)
            printf("Adult\n");
        else if (age >= 65)
            printf("Pension\n");
        else  // age < 18
            printf("Underage\n");
    }

    return 0;
}