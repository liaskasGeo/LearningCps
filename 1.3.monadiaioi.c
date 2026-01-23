#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int x=1;
    int y=1;
    printf("%d,%d",x++,++y);
    printf("\n%d,%d",x++,++y);
    printf("\n%d,%d",x++,++y);
    printf("\n%d,%d",x,y);

    return 0;
}