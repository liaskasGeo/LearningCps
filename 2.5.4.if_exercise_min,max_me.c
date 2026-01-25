#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");

     int x,y,z,max,max2;

    printf("Insert 1st number: ");
    scanf("%d",&x);
    printf("Insert 2nd number: ");
    scanf("%d",&y);
    printf("Insert 3rd number: ");
    scanf("%d",&z);

    if (x > y){
        if (x>z){
            if(y>z){
                printf("Sequence min to max is: %d %d %d",z,y,x);
            }
        }
        
    }
    else if (y > x){
        if (y>z){
            if(x>z){
                printf("Sequence min to max is: %d %d %d",z,x,y);
            }
        }
        
    }
    else if(z > y && z > x && x > y)
        printf("Sequence min to max is %d %d %d",y,x,z);
    
    else if(z > y && z > x && y > x)
        printf("Sequence min to max is %d %d %d",x,y,z);
    else
        printf("Numbers are equal");

    
    return 0;
}