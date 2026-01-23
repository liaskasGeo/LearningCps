#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;

    printf("Doste ton akeraio x: ");
    scanf("%d",&x);
    printf("Doste ton akeraio y: "); 
    scanf("%d",&y);

    if(x<y){
        printf("\n%d<%d",x,y);
    }

    if(x<=y){
        printf("\n%d<=%d",x,y);
    }

    if(x==y){
        printf("\n%d==%d",x,y);
    }

    if(x>y){
        printf("\n%d>=%d",x,y);
    }
    
    if(x>=y){
        printf("\n%d>=%d",x,y);
    }


    return 0;
}