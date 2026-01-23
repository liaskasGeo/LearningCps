#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int isTrue = (8 + 1 == 9);
    printf("is %d",isTrue);
    int x = 1,y = 2, z;

    z=(x>y);
    printf("\n x>y: %d",z);

    z=(x>=y);
    printf("\n x>=y: %d",z);

    z=(x==y);
    printf("\n x==y: %d",z);

    z=(x<=y);
    printf("\n x<=y: %d",z);

    z=(x<y);
    printf("\n x<y: %d",z);

    return 0;
}