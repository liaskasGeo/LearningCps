#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    
    int age;
    
        printf("Insert age: ");
        scanf("%d",&age);

        if (age<18)
        {
            printf("Anilikos");
        }
        else{
            if(age <= 65){
                printf("Eisai enilikos");
            }
            else{
                printf("Eisai sidaksiouxos");
            }
        }
    
    return 0;
}