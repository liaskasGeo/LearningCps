#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
      int x,y;

    printf("Doste ton akeraio x: ");
    scanf("%d",&x);
    printf("Doste ton akeraio y: "); 
    scanf("%d",&y);

    if(x<y)
        printf("Isxiei x<y");
    else if(x==y)
        printf("Isxiei x=y");
    else
        printf("Isxyei x>y");
    return 0;
}