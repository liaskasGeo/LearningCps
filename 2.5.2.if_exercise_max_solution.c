#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    
    int x,y,z,max;

    printf("Insert x number: ");
    scanf("%d",&x);
    printf("Insert y number: ");
    scanf("%d",&y);
    printf("Insert z number: ");
    scanf("%d",&z);

    if(x>y){
        if (x>z){
            printf("x is the highest %d",x);
        }
        else{ //z >= x
            printf("z is the highest %d",z);
        }
    }
    else
    {
        if (y>z){
            printf("y is the highest %d",y);
        }
        else{ //z >= y
            printf("z is the highest %d",z);
        }
    }
     
    return 0;
}